//
// Created by kjell-olovhogdahl on 8/4/2016.
//

#ifndef ODYSSEUS_ODYSSEUS_H
#define ODYSSEUS_ODYSSEUS_H
#include <string>

namespace odysseus {

    namespace pre_processor_entities {
        // Use pre-prcessor macros to populate this name-space with compile-time constants, types and template meta-functions

        enum e_Compiler {
             eCompiler_Undefined
            ,eCompiler_Unknown
        };

#if defined(__clang__)
        struct compiler_trait {
            const std::string name = "Clang Compiler";
        };
#elif defined (__GNUC__)
        struct compiler_trait {
            const std::string name = "GCC Compiler";
        };
#elif defined (_MSC_VER)
		struct compiler_trait {
			const std::string name = "Visual Studio Compiler";
		};
#else
        struct compiler_trait {
            const std::string name = "Unknown Compiler";
        };
#endif
    }

    // use pre-processor namespace members to populate this namespace with constants, types and template meta-functions
    struct compiler {
		const pre_processor_entities::compiler_trait id{};
    };

}


#endif //ODYSSEUS_ODYSSEUS_H
