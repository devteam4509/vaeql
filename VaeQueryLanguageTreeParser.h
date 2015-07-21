/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : VaeQueryLanguageTreeParser.g
 *     -                            On : 2015-07-20 19:03:32
 *     -           for the tree parser : VaeQueryLanguageTreeParserTreeParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The tree parser VaeQueryLanguageTreeParser has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pVaeQueryLanguageTreeParser, which is returned from a call to VaeQueryLanguageTreeParserNew().
 *
 * The methods in pVaeQueryLanguageTreeParser are  as follows:
 *
 *  - VaeQueryLanguageTreeParser_start_return      pVaeQueryLanguageTreeParser->start(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->at(pVaeQueryLanguageTreeParser)
 *  - VaeQueryLanguageTreeParser_expr_return      pVaeQueryLanguageTreeParser->expr(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->evaledExpr(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->function(pVaeQueryLanguageTreeParser)
 *  - void      pVaeQueryLanguageTreeParser->expressionList(pVaeQueryLanguageTreeParser)
 *  - VaeQueryLanguageTreeParser_oper_return      pVaeQueryLanguageTreeParser->oper(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->path(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->piper(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->predicate(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->predicateExpr(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->predicateOper(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->predicatePath(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->predicateEqualityOper(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->predicateInequalityOper(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->predicateAndOper(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->predicateOrOper(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->predicateComparisonOper(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->predicateRangeOper(pVaeQueryLanguageTreeParser)
 *  - VaeQueryLanguageTreeParser_rangeFunction_return      pVaeQueryLanguageTreeParser->rangeFunction(pVaeQueryLanguageTreeParser)
 *  - VaeQueryLanguageTreeParser_rootExpr_return      pVaeQueryLanguageTreeParser->rootExpr(pVaeQueryLanguageTreeParser)
 *  - VaeQueryLanguageTreeParser_rootPath_return      pVaeQueryLanguageTreeParser->rootPath(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->slash(pVaeQueryLanguageTreeParser)
 *  - VaeQueryLanguageTreeParser_value_return      pVaeQueryLanguageTreeParser->value(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->variable(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->xpathExpr(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->xpathFunction(pVaeQueryLanguageTreeParser)
 *  - pANTLR3_STRING      pVaeQueryLanguageTreeParser->xpathFunctionExpression(pVaeQueryLanguageTreeParser)
 *  - void      pVaeQueryLanguageTreeParser->andOper(pVaeQueryLanguageTreeParser)
 *  - void      pVaeQueryLanguageTreeParser->orOper(pVaeQueryLanguageTreeParser)
 *  - void      pVaeQueryLanguageTreeParser->equalityOper(pVaeQueryLanguageTreeParser)
 *  - void      pVaeQueryLanguageTreeParser->inequalityOper(pVaeQueryLanguageTreeParser)
 *  - VaeQueryLanguageTreeParser_comparisonOper_return      pVaeQueryLanguageTreeParser->comparisonOper(pVaeQueryLanguageTreeParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_VaeQueryLanguageTreeParser_H
#define _VaeQueryLanguageTreeParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct VaeQueryLanguageTreeParser_Ctx_struct VaeQueryLanguageTreeParser, * pVaeQueryLanguageTreeParser;



#include "vaeql.h"
#define FUNCTION_ARG_LIST_SIZE 25


#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
typedef struct VaeQueryLanguageTreeParser_start_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
    pANTLR3_STRING result;
    int isPath;
}
    VaeQueryLanguageTreeParser_start_return;

typedef struct VaeQueryLanguageTreeParser_expr_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
    pANTLR3_STRING result;
    int isPath;
}
    VaeQueryLanguageTreeParser_expr_return;

typedef struct VaeQueryLanguageTreeParser_oper_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
    pANTLR3_STRING result;
    int isPath;
}
    VaeQueryLanguageTreeParser_oper_return;

typedef struct VaeQueryLanguageTreeParser_rangeFunction_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
    pANTLR3_STRING lowResult;
    pANTLR3_STRING highResult;
}
    VaeQueryLanguageTreeParser_rangeFunction_return;

typedef struct VaeQueryLanguageTreeParser_rootExpr_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
    pANTLR3_STRING result;
    int isPath;
}
    VaeQueryLanguageTreeParser_rootExpr_return;

typedef struct VaeQueryLanguageTreeParser_rootPath_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
    pANTLR3_STRING result;
    int isPath;
}
    VaeQueryLanguageTreeParser_rootPath_return;

typedef struct VaeQueryLanguageTreeParser_value_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
    pANTLR3_STRING result;
    int isPath;
    int isBlankVariable;
}
    VaeQueryLanguageTreeParser_value_return;

typedef struct VaeQueryLanguageTreeParser_comparisonOper_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
}
    VaeQueryLanguageTreeParser_comparisonOper_return;



/** Context tracking structure for VaeQueryLanguageTreeParser
 */
struct VaeQueryLanguageTreeParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_TREE_PARSER	    pTreeParser;


     VaeQueryLanguageTreeParser_start_return (*start)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*at)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     VaeQueryLanguageTreeParser_expr_return (*expr)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*evaledExpr)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*function)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     void (*expressionList)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     VaeQueryLanguageTreeParser_oper_return (*oper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*path)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*piper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*predicate)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*predicateExpr)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*predicateOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*predicatePath)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*predicateEqualityOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*predicateInequalityOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*predicateAndOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*predicateOrOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*predicateComparisonOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*predicateRangeOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     VaeQueryLanguageTreeParser_rangeFunction_return (*rangeFunction)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     VaeQueryLanguageTreeParser_rootExpr_return (*rootExpr)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     VaeQueryLanguageTreeParser_rootPath_return (*rootPath)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*slash)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     VaeQueryLanguageTreeParser_value_return (*value)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*variable)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*xpathExpr)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*xpathFunction)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     pANTLR3_STRING (*xpathFunctionExpression)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     void (*andOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     void (*orOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     void (*equalityOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     void (*inequalityOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
     VaeQueryLanguageTreeParser_comparisonOper_return (*comparisonOper)	(struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
    // Delegated rules
    const char * (*getGrammarFileName)();
    void	    (*free)   (struct VaeQueryLanguageTreeParser_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pVaeQueryLanguageTreeParser VaeQueryLanguageTreeParserNew         (pANTLR3_COMMON_TREE_NODE_STREAM instream);
ANTLR3_API pVaeQueryLanguageTreeParser VaeQueryLanguageTreeParserNewSSD      (pANTLR3_COMMON_TREE_NODE_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the tree parser will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define NODE_VALUE      13
#define INEQUALITY      26
#define PIPE      39
#define XPATH_FUNCTION      54
#define MULT      18
#define SPECIAL_PREV      16
#define ADD_TOK      36
#define XPATH_AXIS_SEP      23
#define SUB      37
#define NODE_XPATHFUNCTION      14
#define PERMALINK      49
#define SPECIAL_NEXT      15
#define NODE_PATHREF      9
#define XOR_ALT      57
#define LPAREN      45
#define XPATH_AXES      53
#define NODE_IF      6
#define RPAREN      46
#define FUNCTION      48
#define EQUALITY_ALT      25
#define SQL      21
#define NAME      51
#define PATHREF      42
#define NOT      35
#define AT      22
#define EQUALITY      24
#define AND      32
#define DOT_STEP      52
#define IFTRUE      40
#define LESS      28
#define XOR      34
#define LTE      29
#define NODE_ABSOLUTE      4
#define FLOAT      59
#define NODE_PREDICATE      10
#define INT      50
#define OR_ALT      56
#define NODE_FUNCTION      5
#define VARIABLE      60
#define ESC_SEQ      61
#define NODE_SQL      11
#define WS      62
#define EOF      -1
#define NODE_PATH      8
#define COMMA      47
#define OR      33
#define MOD      38
#define SLASH      19
#define GREATER      30
#define LBRACKET      43
#define COLON      41
#define RBRACKET      44
#define NODE_PARENEXPR      7
#define DIV      17
#define NODE_STAR      12
#define STAR      20
#define AND_ALT      55
#define GTE      31
#define STRING      58
#define INEQUALITY_ALT      27
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for VaeQueryLanguageTreeParser
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
