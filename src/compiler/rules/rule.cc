#include "compiler/rules/rule.h"
#include <set>

namespace tree_sitter {
    using std::ostream;
    using std::string;
    
    namespace rules {
        bool Rule::operator!=(const Rule &other) const {
            return !this->operator==(other);
        }

        ostream& operator<<(ostream& stream, const Rule &rule) {
            return stream << rule.to_string();
        }

        ostream& operator<<(ostream& stream, const rule_ptr &rule) {
            if (rule.get())
                stream << *rule;
            else
                stream << string("#<null-rule>");
            return stream;
        }
    }
}