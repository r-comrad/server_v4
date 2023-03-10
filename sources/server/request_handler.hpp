#ifndef REQUEST_HANDLER_HPP
#define REQUEST_HANDLER_HPP

#define SERVER_FUNCTIONS                                                \
    template <typename... Args>                                         \
    crow::json::wvalue::list getDataAsJSON(std::string_view aTableName, \
                                           Args&&... args) noexcept     \
    {                                                                   \
        crow::json::wvalue::list res{400};                              \
        auto hasher   = std::hash<std::string_view>{};                  \
        auto str_hash = hasher(aTableName);                             \
                                                                        \
        if (str_hash == hasher("school"))                               \
        {                                                               \
            res = getData<data::School>(args...);                       \
        }                                                               \
        else if (str_hash == hasher("user"))                            \
        {                                                               \
            res = getData<data::User>(args...);                         \
        }                                                               \
        else if (str_hash == hasher("role"))                            \
        {                                                               \
            res = getData<data::Role>(args...);                         \
        }                                                               \
        else if (str_hash == hasher("grade"))                           \
        {                                                               \
            res = getData<data::Grade>(args...);                        \
        }                                                               \
        else if (str_hash == hasher("grade_student"))                   \
        {                                                               \
            res = getData<data::Grade_student>(args...);                \
        }                                                               \
        else if (str_hash == hasher("group"))                           \
        {                                                               \
            res = getData<data::Group>(args...);                        \
        }                                                               \
        else if (str_hash == hasher("group_student"))                   \
        {                                                               \
            res = getData<data::Group_student>(args...);                \
        }                                                               \
        else if (str_hash == hasher("lesson"))                          \
        {                                                               \
            res = getData<data::Lesson>(args...);                       \
        }                                                               \
        else if (str_hash == hasher("journal_table"))                   \
        {                                                               \
            res = getData<data::Journal_table>(args...);                \
        }                                                               \
        else if (str_hash == hasher("subject"))                         \
        {                                                               \
            res = getData<data::Subject>(args...);                      \
        }                                                               \
        else if (str_hash == hasher("mark"))                            \
        {                                                               \
            res = getData<data::Mark>(args...);                         \
        }                                                               \
        else if (str_hash == hasher("plan"))                            \
        {                                                               \
            res = getData<data::Plan>(args...);                         \
        }                                                               \
        else if (str_hash == hasher("theme"))                           \
        {                                                               \
            res = getData<data::Theme>(args...);                        \
        }                                                               \
        else if (str_hash == hasher("file"))                            \
        {                                                               \
            res = getData<data::File>(args...);                         \
        }                                                               \
        else if (str_hash == hasher("holiday"))                         \
        {                                                               \
            res = getData<data::Holiday>(args...);                      \
        }                                                               \
        else if (str_hash == hasher("problem"))                         \
        {                                                               \
            res = getData<data::Problem>(args...);                      \
        }                                                               \
        else if (str_hash == hasher("submission"))                      \
        {                                                               \
            res = getData<data::Submission>(args...);                   \
        }                                                               \
        else if (str_hash == hasher("user_upload"))                     \
        {                                                               \
            res = getData<data::User_upload>(args...);                  \
        }                                                               \
        else if (str_hash == hasher("plan_upload"))                     \
        {                                                               \
            res = getData<data::Plan_upload>(args...);                  \
        }                                                               \
        else if (str_hash == hasher("journal_upload"))                  \
        {                                                               \
            res = getData<data::Journal_upload>(args...);               \
        }                                                               \
        else if (str_hash == hasher("journal_download"))                \
        {                                                               \
            res = getData<data::Journal_download>(args...);             \
        }                                                               \
        else if (str_hash == hasher("question"))                        \
        {                                                               \
            res = getData<data::Question>(args...);                     \
        }                                                               \
        else if (str_hash == hasher("question_type"))                   \
        {                                                               \
            res = getData<data::Question_type>(args...);                \
        }                                                               \
        else if (str_hash == hasher("user_answer"))                     \
        {                                                               \
            res = getData<data::User_answer>(args...);                  \
        }                                                               \
                                                                        \
        return res;                                                     \
    }

#endif // !REQUEST_HANDLER_HPP
