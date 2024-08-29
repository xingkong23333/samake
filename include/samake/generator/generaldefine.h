#ifndef SAMAKE_GENERALDEFINE_H
#define SAMAKE_GENERALDEFINE_H

#include <samake/generator/generalvar.h>
#include <samake/generator/generalval.h>

namespace samake {

    class GeneralDefine {
    private:
        GeneralVar m_var;
        GeneralVal m_val;
    public:

        /**
         *
         * @brief Get the lvalue that is expected to be assigned.
         *
         * @return A reference to the lvalue.
         *
         */
        [[nodiscard]] const GeneralVar& get_var() const;

        /**
         *
         * @brief Get the rvalue that is intended to be assigned to the lvalue.
         *
         * @return A reference to the rvalue.
         *
         */
        [[nodiscard]] const GeneralVal& get_val() const;

    };

} // samake

#endif //SAMAKE_GENERALDEFINE_H
