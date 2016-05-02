//
// This file is generated by the 'tokens.py' script.
//


#ifndef _TOKENS_HEADER_
#define _TOKENS_HEADER_

#include <string>
#include <unordered_map>


namespace raptor{
namespace lexer{


enum class TOK
{
    NAME,        // 
    INTEGER,     // 
    FLOAT,       // 
    STRING,      // 
    CHARACTER,   // 
    COMMENT,     // 
    UNDEFINED,   // 
    END,         // 
    EXCLAIM,     // !
    NOT_EQUAL,   // !=
    HASH,        // #
    DOLLAR,      // $
    PERCENT,     // %
    AMP,         // &
    L_PAREN,     // (
    R_PAREN,     // )
    STAR,        // *
    PLUS,        // +
    COMMA,       // ,
    MINUS,       // -
    PERIOD,      // .
    SLASH,       // /
    COLON,       // :
    SEMI,        // ;
    LESS,        // <
    LESS2,       // <<
    LESS_EQ,     // <=
    EQUAL,       // =
    EQUAL2,      // ==
    GREATER,     // >
    GREATER_EQ,  // >=
    GREATER2,    // >>
    QUESTION,    // ?
    AT,          // @
    L_SQUARE,    // [
    R_SQUARE,    // ]
    CARET,       // ^
    ALIAS,       // alias
    AND,         // and
    FALSE,       // false
    FUNC,        // func
    IMPORT,      // import
    LENGTH,      // len
    LET,         // let
    MAIN,        // main
    OR,          // or
    PACKAGE,     // package
    PROC,        // proc
    SET,         // set
    STRUCT,      // struct
    TRUE,        // true
    L_BRACE,     // {
    PIPE,        // |
    R_BRACE,     // }
    TILDE,       // ~
};

struct Token{
    TOK name;
    std::string value;
    std::string to_string() const;
};

// --------------------------------------------------------
// Functions for printing Tokens and TOKs
// --------------------------------------------------------
std::string TOK_to_string(TOK t);
std::ostream& operator<<(std::ostream& os, const Token& t);
std::ostream& operator<<(std::ostream& os, const TOK& t);

// --------------------------------------------------------
// Utility function used to check for reserved words
// --------------------------------------------------------
std::unordered_map<std::string, TOK> get_list_reserved();
TOK get_reserved_TOK(std::string word);

// --------------------------------------------------------
// Utility function used to check for punctuators
// --------------------------------------------------------
std::unordered_map<std::string, TOK> get_list_punctuator();
TOK get_punctuator_TOK(std::istream& ts, std::string &punc);

}
}

#endif
