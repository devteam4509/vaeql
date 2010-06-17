/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : VerbQueryLanguage.g
 *     -                            On : 2010-06-16 20:16:15
 *     -                for the parser : VerbQueryLanguageParserParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser VerbQueryLanguageParser has the callable functions (rules) shown below,
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
 * a parser context typedef pVerbQueryLanguageParser, which is returned from a call to VerbQueryLanguageParserNew().
 *
 * The methods in pVerbQueryLanguageParser are  as follows:
 *
 *  - VerbQueryLanguageParser_start_return      pVerbQueryLanguageParser->start(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_expr_return      pVerbQueryLanguageParser->expr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_orExpr_return      pVerbQueryLanguageParser->orExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_xorExpr_return      pVerbQueryLanguageParser->xorExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_andExpr_return      pVerbQueryLanguageParser->andExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_comparisonExpr_return      pVerbQueryLanguageParser->comparisonExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_addSubExpr_return      pVerbQueryLanguageParser->addSubExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_multExpr_return      pVerbQueryLanguageParser->multExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_ifExpr_return      pVerbQueryLanguageParser->ifExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_notExpr_return      pVerbQueryLanguageParser->notExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_valueExpr_return      pVerbQueryLanguageParser->valueExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_function_return      pVerbQueryLanguageParser->function(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_expressionList_return      pVerbQueryLanguageParser->expressionList(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_functionNoArgs_return      pVerbQueryLanguageParser->functionNoArgs(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_path_return      pVerbQueryLanguageParser->path(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_rootPath_return      pVerbQueryLanguageParser->rootPath(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_absolutePath_return      pVerbQueryLanguageParser->absolutePath(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_idPath_return      pVerbQueryLanguageParser->idPath(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_relativePath_return      pVerbQueryLanguageParser->relativePath(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_relativePathWithoutPredicates_return      pVerbQueryLanguageParser->relativePathWithoutPredicates(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_unionPath_return      pVerbQueryLanguageParser->unionPath(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_pathStep_return      pVerbQueryLanguageParser->pathStep(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_pathStepInternal_return      pVerbQueryLanguageParser->pathStepInternal(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_axisSpecifier_return      pVerbQueryLanguageParser->axisSpecifier(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_predicate_return      pVerbQueryLanguageParser->predicate(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_predicateExpr_return      pVerbQueryLanguageParser->predicateExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_predicateAndExpr_return      pVerbQueryLanguageParser->predicateAndExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_predicateComparisonExpr_return      pVerbQueryLanguageParser->predicateComparisonExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_predicatePathExpr_return      pVerbQueryLanguageParser->predicatePathExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_filterExpr_return      pVerbQueryLanguageParser->filterExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_primaryExpr_return      pVerbQueryLanguageParser->primaryExpr(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_andOper_return      pVerbQueryLanguageParser->andOper(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_orOper_return      pVerbQueryLanguageParser->orOper(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_xorOper_return      pVerbQueryLanguageParser->xorOper(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_value_return      pVerbQueryLanguageParser->value(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_variable_return      pVerbQueryLanguageParser->variable(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_comparisonOper_return      pVerbQueryLanguageParser->comparisonOper(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_addSubOper_return      pVerbQueryLanguageParser->addSubOper(pVerbQueryLanguageParser)
 *  - VerbQueryLanguageParser_multOper_return      pVerbQueryLanguageParser->multOper(pVerbQueryLanguageParser)
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

#ifndef	_VerbQueryLanguageParser_H
#define _VerbQueryLanguageParser_H
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
typedef struct VerbQueryLanguageParser_Ctx_struct VerbQueryLanguageParser, * pVerbQueryLanguageParser;



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
typedef struct VerbQueryLanguageParser_start_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_start_return;

typedef struct VerbQueryLanguageParser_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_expr_return;

typedef struct VerbQueryLanguageParser_orExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_orExpr_return;

typedef struct VerbQueryLanguageParser_xorExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_xorExpr_return;

typedef struct VerbQueryLanguageParser_andExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_andExpr_return;

typedef struct VerbQueryLanguageParser_comparisonExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_comparisonExpr_return;

typedef struct VerbQueryLanguageParser_addSubExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_addSubExpr_return;

typedef struct VerbQueryLanguageParser_multExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_multExpr_return;

typedef struct VerbQueryLanguageParser_ifExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_ifExpr_return;

typedef struct VerbQueryLanguageParser_notExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_notExpr_return;

typedef struct VerbQueryLanguageParser_valueExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_valueExpr_return;

typedef struct VerbQueryLanguageParser_function_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_function_return;

typedef struct VerbQueryLanguageParser_expressionList_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_expressionList_return;

typedef struct VerbQueryLanguageParser_functionNoArgs_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_functionNoArgs_return;

typedef struct VerbQueryLanguageParser_path_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_path_return;

typedef struct VerbQueryLanguageParser_rootPath_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_rootPath_return;

typedef struct VerbQueryLanguageParser_absolutePath_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_absolutePath_return;

typedef struct VerbQueryLanguageParser_idPath_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_idPath_return;

typedef struct VerbQueryLanguageParser_relativePath_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_relativePath_return;

typedef struct VerbQueryLanguageParser_relativePathWithoutPredicates_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_relativePathWithoutPredicates_return;

typedef struct VerbQueryLanguageParser_unionPath_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_unionPath_return;

typedef struct VerbQueryLanguageParser_pathStep_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_pathStep_return;

typedef struct VerbQueryLanguageParser_pathStepInternal_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_pathStepInternal_return;

typedef struct VerbQueryLanguageParser_axisSpecifier_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_axisSpecifier_return;

typedef struct VerbQueryLanguageParser_predicate_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_predicate_return;

typedef struct VerbQueryLanguageParser_predicateExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_predicateExpr_return;

typedef struct VerbQueryLanguageParser_predicateAndExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_predicateAndExpr_return;

typedef struct VerbQueryLanguageParser_predicateComparisonExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_predicateComparisonExpr_return;

typedef struct VerbQueryLanguageParser_predicatePathExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_predicatePathExpr_return;

typedef struct VerbQueryLanguageParser_filterExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_filterExpr_return;

typedef struct VerbQueryLanguageParser_primaryExpr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_primaryExpr_return;

typedef struct VerbQueryLanguageParser_andOper_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_andOper_return;

typedef struct VerbQueryLanguageParser_orOper_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_orOper_return;

typedef struct VerbQueryLanguageParser_xorOper_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_xorOper_return;

typedef struct VerbQueryLanguageParser_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_value_return;

typedef struct VerbQueryLanguageParser_variable_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_variable_return;

typedef struct VerbQueryLanguageParser_comparisonOper_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_comparisonOper_return;

typedef struct VerbQueryLanguageParser_addSubOper_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_addSubOper_return;

typedef struct VerbQueryLanguageParser_multOper_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    VerbQueryLanguageParser_multOper_return;



/** Context tracking structure for VerbQueryLanguageParser
 */
struct VerbQueryLanguageParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;


     VerbQueryLanguageParser_start_return (*start)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_expr_return (*expr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_orExpr_return (*orExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_xorExpr_return (*xorExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_andExpr_return (*andExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_comparisonExpr_return (*comparisonExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_addSubExpr_return (*addSubExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_multExpr_return (*multExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_ifExpr_return (*ifExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_notExpr_return (*notExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_valueExpr_return (*valueExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_function_return (*function)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_expressionList_return (*expressionList)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_functionNoArgs_return (*functionNoArgs)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_path_return (*path)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_rootPath_return (*rootPath)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_absolutePath_return (*absolutePath)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_idPath_return (*idPath)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_relativePath_return (*relativePath)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_relativePathWithoutPredicates_return (*relativePathWithoutPredicates)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_unionPath_return (*unionPath)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_pathStep_return (*pathStep)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_pathStepInternal_return (*pathStepInternal)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_axisSpecifier_return (*axisSpecifier)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_predicate_return (*predicate)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_predicateExpr_return (*predicateExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_predicateAndExpr_return (*predicateAndExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_predicateComparisonExpr_return (*predicateComparisonExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_predicatePathExpr_return (*predicatePathExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_filterExpr_return (*filterExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_primaryExpr_return (*primaryExpr)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_andOper_return (*andOper)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_orOper_return (*orOper)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_xorOper_return (*xorOper)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_value_return (*value)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_variable_return (*variable)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_comparisonOper_return (*comparisonOper)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_addSubOper_return (*addSubOper)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
     VerbQueryLanguageParser_multOper_return (*multOper)	(struct VerbQueryLanguageParser_Ctx_struct * ctx);
    // Delegated rules
    const char * (*getGrammarFileName)();
    void	    (*free)   (struct VerbQueryLanguageParser_Ctx_struct * ctx);
    /* @headerFile.members() */
    pANTLR3_BASE_TREE_ADAPTOR	adaptor;
    pANTLR3_VECTOR_FACTORY		vectors;
    /* End @headerFile.members() */
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pVerbQueryLanguageParser VerbQueryLanguageParserNew         (pANTLR3_COMMON_TOKEN_STREAM instream);
ANTLR3_API pVerbQueryLanguageParser VerbQueryLanguageParserNewSSD      (pANTLR3_COMMON_TOKEN_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the parser will work with.
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
#define AND_ALT      50
#define FUNCTION      44
#define EQUALITY      20
#define STAR      16
#define MOD      34
#define NODE_FUNCTION      5
#define GTE      27
#define SUB      33
#define FLOAT      54
#define NOT      31
#define AND      28
#define EOF      -1
#define LTE      25
#define INEQUALITY_ALT      23
#define LPAREN      41
#define DOT_STEP      48
#define EQUALITY_ALT      21
#define AT      18
#define LBRACKET      39
#define NODE_ABSOLUTE      4
#define SQL      17
#define RPAREN      42
#define NAME      47
#define ESC_SEQ      56
#define SLASH      15
#define GREATER      26
#define COMMA      43
#define NODE_STAR      11
#define NODE_VALUE      12
#define XPATH_AXIS_SEP      19
#define LESS      24
#define OR_ALT      51
#define PIPE      35
#define XOR_ALT      52
#define XPATH_AXES      49
#define RBRACKET      40
#define XOR      30
#define NODE_PATH      8
#define NODE_PREDICATE      9
#define ADD_TOK      32
#define POOPOO      36
#define IFTRUE      37
#define NODE_PARENEXPR      7
#define PERMALINK      45
#define INEQUALITY      22
#define INT      46
#define MULT      14
#define NODE_IF      6
#define COLON      38
#define WS      57
#define VARIABLE      55
#define OR      29
#define DIV      13
#define NODE_SQL      10
#define STRING      53
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for VerbQueryLanguageParser
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
