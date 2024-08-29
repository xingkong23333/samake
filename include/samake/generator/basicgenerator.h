#ifndef SAMAKE_BASICGENERATOR_H
#define SAMAKE_BASICGENERATOR_H

#include <string>

namespace samake {

    class BasicGenerator {
    public:
        virtual std::string generate() = 0;
    };

} // samake

#endif //SAMAKE_BASICGENERATOR_H
