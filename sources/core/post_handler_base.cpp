#include "post_handler_base.hpp"

#include "domain/path.hpp"

#include "post_handler.hpp"

std::string
core::PostHandlerBase::uploadFile(crow::multipart::message& aMsg,
                                  data::DatabaseQuery& aDBQ,
                                  std::string aPathPrefix)
{
    if (aPathPrefix.empty()) aPathPrefix = dom::Path::getPath("upload").value();

    // TODO: filename
    auto fileName = aMsg.get_part_by_name("filename").body;
    auto file     = aMsg.get_part_by_name("file").body;

    auto table = aDBQ.getData<data::File>();

    std::string filePath =
        aPathPrefix + std::to_string(table[0].num++) + "-" + fileName;

    aDBQ.update<data::File>(table);

    auto file_handler = std::ofstream(filePath);
    file_handler << file;
    file_handler.close();

    return filePath;
}

void
core::PostHandlerBase::transmitToPostHandler(const std::string& aTableName,
                                             int aID,
                                             crow::json::rvalue& aPartnerIDs,
                                             data::DatabaseQuery& aDBQ,
                                             bool aIsAdding)
{
    PostHandler::supportingPost(aTableName, aID, aPartnerIDs, aDBQ, aIsAdding);
}
