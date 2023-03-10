#ifndef POST_ROUTER_HPP
#define POST_ROUTER_HPP

#include "journal_handler.hpp"
#include "plan_handler.hpp"
#include "post_handler.hpp"

namespace core
{
class PostRouter
{
public:
    template <typename... Args>
    static crow::json::wvalue supportingPost(std::string_view aTableName,
                                             Args&&... args) noexcept
    {
        crow::json::wvalue res{400};
        auto hasher   = std::hash<std::string_view>{};
        auto str_hash = hasher(aTableName);

        if (str_hash == hasher("school"))
        {
            res = core::PostHandler::supportingProcess<data::School>(args...);
        }
        else if (str_hash == hasher("user"))
        {
            res = core::PostHandler::supportingProcess<data::User>(args...);
        }
        else if (str_hash == hasher("role"))
        {
            res = core::PostHandler::supportingProcess<data::Role>(args...);
        }
        else if (str_hash == hasher("grade"))
        {
            res = core::PostHandler::supportingProcess<data::Grade>(args...);
        }
        else if (str_hash == hasher("grade_student"))
        {
            res = core::PostHandler::supportingProcess<data::Grade_student>(
                args...);
        }
        else if (str_hash == hasher("group"))
        {
            res = core::PostHandler::supportingProcess<data::Group>(args...);
        }
        else if (str_hash == hasher("group_student"))
        {
            res = core::PostHandler::supportingProcess<data::Group_student>(
                args...);
        }
        else if (str_hash == hasher("lesson"))
        {
            res = core::PostHandler::supportingProcess<data::Lesson>(args...);
        }
        else if (str_hash == hasher("journal_table"))
        {
            res = core::PostHandler::supportingProcess<data::Journal_table>(
                args...);
        }
        else if (str_hash == hasher("subject"))
        {
            res = core::PostHandler::supportingProcess<data::Subject>(args...);
        }
        else if (str_hash == hasher("mark"))
        {
            res = core::PostHandler::supportingProcess<data::Mark>(args...);
        }
        else if (str_hash == hasher("plan"))
        {
            res = core::PostHandler::supportingProcess<data::Plan>(args...);
        }
        else if (str_hash == hasher("theme"))
        {
            res = core::PostHandler::supportingProcess<data::Theme>(args...);
        }
        else if (str_hash == hasher("file"))
        {
            res = core::PostHandler::supportingProcess<data::File>(args...);
        }
        else if (str_hash == hasher("holiday"))
        {
            res = core::PostHandler::supportingProcess<data::Holiday>(args...);
        }
        else if (str_hash == hasher("problem"))
        {
            res = core::PostHandler::supportingProcess<data::Problem>(args...);
        }
        else if (str_hash == hasher("submission"))
        {
            res =
                core::PostHandler::supportingProcess<data::Submission>(args...);
        }
        else if (str_hash == hasher("user_upload"))
        {
            res = core::PostHandler::supportingProcess<data::User_upload>(
                args...);
        }
        else if (str_hash == hasher("plan_upload"))
        {
            res = core::PostHandler::supportingProcess<data::Plan_upload>(
                args...);
        }
        else if (str_hash == hasher("journal_upload"))
        {
            res = core::PostHandler::supportingProcess<data::Journal_upload>(
                args...);
        }
        else if (str_hash == hasher("journal_download"))
        {
            res = core::PostHandler::supportingProcess<data::Journal_download>(
                args...);
        }
        else if (str_hash == hasher("question"))
        {
            res = core::PostHandler::supportingProcess<data::Question>(args...);
        }
        else if (str_hash == hasher("question_type"))
        {
            res = core::PostHandler::supportingProcess<data::Question_type>(
                args...);
        }
        else if (str_hash == hasher("question_answer"))
        {
            res = core::PostHandler::supportingProcess<data::Question_answer>(
                args...);
        }
        else if (str_hash == hasher("user_answer"))
        {
            res = core::PostHandler::supportingProcess<data::User_answer>(
                args...);
        }

        return res;
    }
    template <typename... Args>
    static crow::json::wvalue loadPost(std::string_view aTableName,
                                       Args&&... args) noexcept
    {
        crow::json::wvalue res{400};
        auto hasher   = std::hash<std::string_view>{};
        auto str_hash = hasher(aTableName);

        if (str_hash == hasher("school"))
        {
            res = core::PostHandler::loadFromFile<data::School>(args...);
        }
        if (str_hash == hasher("user"))
        {
            res = core::PostHandler::loadFromFile<data::User>(args...);
        }
        if (str_hash == hasher("role"))
        {
            res = core::PostHandler::loadFromFile<data::Role>(args...);
        }
        if (str_hash == hasher("grade"))
        {
            res = core::PostHandler::loadFromFile<data::Grade>(args...);
        }
        if (str_hash == hasher("grade_student"))
        {
            res = core::PostHandler::loadFromFile<data::Grade_student>(args...);
        }
        if (str_hash == hasher("group"))
        {
            res = core::PostHandler::loadFromFile<data::Group>(args...);
        }
        if (str_hash == hasher("group_student"))
        {
            res = core::PostHandler::loadFromFile<data::Group_student>(args...);
        }
        if (str_hash == hasher("lesson"))
        {
            res = core::PostHandler::loadFromFile<data::Lesson>(args...);
        }
        if (str_hash == hasher("journal_table"))
        {
            res = core::JournalHandler::loadFromFile(args...);
        }
        if (str_hash == hasher("subject"))
        {
            res = core::PostHandler::loadFromFile<data::Subject>(args...);
        }
        if (str_hash == hasher("mark"))
        {
            res = core::PostHandler::loadFromFile<data::Mark>(args...);
        }
        if (str_hash == hasher("plan"))
        {
            res = core::PlanHandler::loadFromFile(args...);
        }
        if (str_hash == hasher("theme"))
        {
            res = core::PostHandler::loadFromFile<data::Theme>(args...);
        }
        if (str_hash == hasher("file"))
        {
            res = core::PostHandler::loadFromFile<data::File>(args...);
        }
        if (str_hash == hasher("holiday"))
        {
            res = core::PostHandler::loadFromFile<data::Holiday>(args...);
        }
        if (str_hash == hasher("problem"))
        {
            res = core::PostHandler::loadFromFile<data::Problem>(args...);
        }
        if (str_hash == hasher("submission"))
        {
            res = core::PostHandler::loadFromFile<data::Submission>(args...);
        }
        if (str_hash == hasher("user_upload"))
        {
            res = core::PostHandler::loadFromFile<data::User_upload>(args...);
        }
        if (str_hash == hasher("plan_upload"))
        {
            res = core::PostHandler::loadFromFile<data::Plan_upload>(args...);
        }
        if (str_hash == hasher("journal_upload"))
        {
            res =
                core::PostHandler::loadFromFile<data::Journal_upload>(args...);
        }
        if (str_hash == hasher("journal_download"))
        {
            res = core::PostHandler::loadFromFile<data::Journal_download>(
                args...);
        }
        if (str_hash == hasher("question"))
        {
            res = core::PostHandler::loadFromFile<data::Question>(args...);
        }
        if (str_hash == hasher("question_type"))
        {
            res = core::PostHandler::loadFromFile<data::Question_type>(args...);
        }
        if (str_hash == hasher("question_answer"))
        {
            res =
                core::PostHandler::loadFromFile<data::Question_answer>(args...);
        }
        if (str_hash == hasher("user_answer"))
        {
            res = core::PostHandler::loadFromFile<data::User_answer>(args...);
        }

        return res;
    }
};
} // namespace core

#endif // !POST_HANDLER_HPP