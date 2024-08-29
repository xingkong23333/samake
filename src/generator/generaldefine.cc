#include "samake/generator/generaldefine.h"

namespace samake {
    const GeneralVar& GeneralDefine::get_var() const {
        return this->m_var;
    }

    const GeneralVal& GeneralDefine::get_val() const {
        return this->m_val;
    }
} // samake
