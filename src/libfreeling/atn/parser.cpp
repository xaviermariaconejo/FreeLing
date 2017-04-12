// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.
// //                    "%code top" blocks.
#line 34 "freeling/morfo/parser.y" // lalr1.cc:397

	#include <iostream>
    #include <locale>
	#include <codecvt>
    #include "freeling/morfo/scanner.h"
    #include "freeling/morfo/parser.hpp"
    #include "freeling/morfo/atn.h"
    #include "freeling/morfo/location.hh"
    
    using namespace ATN;

    // yylex() arguments are defined in parser.y
    static Parser::symbol_type yylex(Scanner &scanner, Atn &driver) {
        return scanner.get_next_token();
    }

    wstring_convert< codecvt_utf8_utf16<wchar_t> > converter;

#line 53 "parser.cpp" // lalr1.cc:397


// First part of user declarations.

#line 58 "parser.cpp" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "freeling/morfo/parser.hpp"

// User implementation prologue.

#line 72 "parser.cpp" // lalr1.cc:412


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 9 "freeling/morfo/parser.y" // lalr1.cc:479
namespace  ATN  {
#line 158 "parser.cpp" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   Parser ::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
   Parser :: Parser  (ATN::Scanner &scanner_yyarg, ATN::Atn &driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      scanner (scanner_yyarg),
      driver (driver_yyarg)
  {}

   Parser ::~ Parser  ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
   Parser ::by_state::by_state ()
    : state (empty_state)
  {}

  inline
   Parser ::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
   Parser ::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
   Parser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
   Parser ::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
   Parser ::symbol_number_type
   Parser ::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
   Parser ::stack_symbol_type::stack_symbol_type ()
  {}


  inline
   Parser ::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 66: // atn
        value.move<  ATN::ATNN*  > (that.value);
        break;

      case 63: // func
      case 64: // param_list
      case 65: // param
      case 69: // id_list
      case 71: // state
      case 72: // transition_list
      case 73: // block_instructions
      case 74: // instruction_list
      case 75: // instruction
      case 76: // assign
      case 77: // ids
      case 78: // ite_stmt
      case 79: // else_if
      case 80: // else
      case 81: // while_stmt
      case 82: // for_stmt
      case 83: // init
      case 84: // incremental
      case 85: // dowhile_stmt
      case 86: // return_stmt
      case 87: // print_stmt
      case 88: // print_list
      case 89: // element_to_print
      case 90: // expr
      case 91: // atom
      case 92: // arithmetical_expr
      case 93: // boolean_expr
      case 94: // local_functions
      case 95: // double_arithmetic
      case 96: // funcall
      case 97: // expr_list
      case 98: // object_list
        value.move<  freeling::tree<ATN::ASTN*>*  > (that.value);
        break;

      case 62: // global
        value.move<  std::map<std::wstring, ATN::Data* >  > (that.value);
        break;

      case 70: // states
        value.move<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > (that.value);
        break;

      case 67: // initials
      case 68: // finals
        value.move<  std::vector<std::wstring>  > (that.value);
        break;

      case 36: // "double"
        value.move< float > (that.value);
        break;

      case 35: // "int"
        value.move< int > (that.value);
        break;

      case 34: // "bool"
      case 37: // "string"
      case 38: // "id"
      case 39: // "local function"
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
   Parser ::stack_symbol_type&
   Parser ::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 66: // atn
        value.copy<  ATN::ATNN*  > (that.value);
        break;

      case 63: // func
      case 64: // param_list
      case 65: // param
      case 69: // id_list
      case 71: // state
      case 72: // transition_list
      case 73: // block_instructions
      case 74: // instruction_list
      case 75: // instruction
      case 76: // assign
      case 77: // ids
      case 78: // ite_stmt
      case 79: // else_if
      case 80: // else
      case 81: // while_stmt
      case 82: // for_stmt
      case 83: // init
      case 84: // incremental
      case 85: // dowhile_stmt
      case 86: // return_stmt
      case 87: // print_stmt
      case 88: // print_list
      case 89: // element_to_print
      case 90: // expr
      case 91: // atom
      case 92: // arithmetical_expr
      case 93: // boolean_expr
      case 94: // local_functions
      case 95: // double_arithmetic
      case 96: // funcall
      case 97: // expr_list
      case 98: // object_list
        value.copy<  freeling::tree<ATN::ASTN*>*  > (that.value);
        break;

      case 62: // global
        value.copy<  std::map<std::wstring, ATN::Data* >  > (that.value);
        break;

      case 70: // states
        value.copy<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > (that.value);
        break;

      case 67: // initials
      case 68: // finals
        value.copy<  std::vector<std::wstring>  > (that.value);
        break;

      case 36: // "double"
        value.copy< float > (that.value);
        break;

      case 35: // "int"
        value.copy< int > (that.value);
        break;

      case 34: // "bool"
      case 37: // "string"
      case 38: // "id"
      case 39: // "local function"
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
   Parser ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
   Parser ::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
   Parser ::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
   Parser ::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
   Parser ::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   Parser ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   Parser ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   Parser ::debug_level_type
   Parser ::debug_level () const
  {
    return yydebug_;
  }

  void
   Parser ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline  Parser ::state_type
   Parser ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
   Parser ::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
   Parser ::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
   Parser ::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (scanner, driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 66: // atn
        yylhs.value.build<  ATN::ATNN*  > ();
        break;

      case 63: // func
      case 64: // param_list
      case 65: // param
      case 69: // id_list
      case 71: // state
      case 72: // transition_list
      case 73: // block_instructions
      case 74: // instruction_list
      case 75: // instruction
      case 76: // assign
      case 77: // ids
      case 78: // ite_stmt
      case 79: // else_if
      case 80: // else
      case 81: // while_stmt
      case 82: // for_stmt
      case 83: // init
      case 84: // incremental
      case 85: // dowhile_stmt
      case 86: // return_stmt
      case 87: // print_stmt
      case 88: // print_list
      case 89: // element_to_print
      case 90: // expr
      case 91: // atom
      case 92: // arithmetical_expr
      case 93: // boolean_expr
      case 94: // local_functions
      case 95: // double_arithmetic
      case 96: // funcall
      case 97: // expr_list
      case 98: // object_list
        yylhs.value.build<  freeling::tree<ATN::ASTN*>*  > ();
        break;

      case 62: // global
        yylhs.value.build<  std::map<std::wstring, ATN::Data* >  > ();
        break;

      case 70: // states
        yylhs.value.build<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > ();
        break;

      case 67: // initials
      case 68: // finals
        yylhs.value.build<  std::vector<std::wstring>  > ();
        break;

      case 36: // "double"
        yylhs.value.build< float > ();
        break;

      case 35: // "int"
        yylhs.value.build< int > ();
        break;

      case 34: // "bool"
      case 37: // "string"
      case 38: // "id"
      case 39: // "local function"
        yylhs.value.build< std::string > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 132 "freeling/morfo/parser.y" // lalr1.cc:859
    { driver.clear(); }
#line 735 "parser.cpp" // lalr1.cc:859
    break;

  case 3:
#line 134 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					driver.m_global.insert(yystack_[1].value.as<  std::map<std::wstring, ATN::Data* >  > ().begin(), yystack_[1].value.as<  std::map<std::wstring, ATN::Data* >  > ().end());
				}
#line 743 "parser.cpp" // lalr1.cc:859
    break;

  case 4:
#line 138 "freeling/morfo/parser.y" // lalr1.cc:859
    {
	   				tree<ASTN*>* t = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();
	   				tree<ASTN*>::const_iterator it = t->begin();
	   				driver.m_func[(*it)->getValueWstring()] = t;
	   			}
#line 753 "parser.cpp" // lalr1.cc:859
    break;

  case 5:
#line 144 "freeling/morfo/parser.y" // lalr1.cc:859
    {
	 				ATNN* t = yystack_[0].value.as<  ATN::ATNN*  > ();
	   				driver.m_atn[t->getName()] = t;
	 			}
#line 762 "parser.cpp" // lalr1.cc:859
    break;

  case 6:
#line 152 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				map<wstring, Data* > m;
				m[converter.from_bytes(yystack_[0].value.as< std::string > ())] = new Data();
				yylhs.value.as<  std::map<std::wstring, ATN::Data* >  > () = m;
			}
#line 772 "parser.cpp" // lalr1.cc:859
    break;

  case 7:
#line 158 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				map<wstring, Data* > m = yystack_[2].value.as<  std::map<std::wstring, ATN::Data* >  > ();
				m[converter.from_bytes(yystack_[0].value.as< std::string > ())] = new Data();
				yylhs.value.as<  std::map<std::wstring, ATN::Data* >  > () = m;
			}
#line 782 "parser.cpp" // lalr1.cc:859
    break;

  case 8:
#line 167 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"FUNCTION", converter.from_bytes(yystack_[4].value.as< std::string > ())));
				const tree<ASTN*>* params = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
				const tree<ASTN*>* body = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				t->add_child(*params);
				t->add_child(*body);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
			}
#line 796 "parser.cpp" // lalr1.cc:859
    break;

  case 9:
#line 180 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"PARAM LIST"));
				}
#line 804 "parser.cpp" // lalr1.cc:859
    break;

  case 10:
#line 184 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* params = new tree<ASTN*>(new ASTN(L"PARAM LIST"));
					tree<ASTN*>* p = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					params->add_child(*p);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = params;
				}
#line 816 "parser.cpp" // lalr1.cc:859
    break;

  case 11:
#line 192 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* params = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* p = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					params->add_child(*p);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = params;
				}
#line 828 "parser.cpp" // lalr1.cc:859
    break;

  case 12:
#line 204 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"ANDPERSAND", converter.from_bytes(yystack_[0].value.as< std::string > ())));
			}
#line 836 "parser.cpp" // lalr1.cc:859
    break;

  case 13:
#line 208 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"VALUE", converter.from_bytes(yystack_[0].value.as< std::string > ())));
			}
#line 844 "parser.cpp" // lalr1.cc:859
    break;

  case 14:
#line 215 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				ATNN* atnn = new ATNN(converter.from_bytes(yystack_[5].value.as< std::string > ()));

				vector<wstring> init = yystack_[3].value.as<  std::vector<std::wstring>  > ();
				vector<wstring> fin = yystack_[2].value.as<  std::vector<std::wstring>  > ();
				map<wstring, tree<ASTN*>*> sts = yystack_[1].value.as<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > ();
				
				atnn->setInitials(init);
				atnn->setFinals(fin);
				atnn->setStates(sts);
				yylhs.value.as<  ATN::ATNN*  > () = atnn;
			}
#line 861 "parser.cpp" // lalr1.cc:859
    break;

  case 15:
#line 228 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				ATNN* atnn = new ATNN(converter.from_bytes(yystack_[5].value.as< std::string > ()));

				vector<wstring> init = yystack_[3].value.as<  std::vector<std::wstring>  > ();
				vector<wstring> fin = yystack_[1].value.as<  std::vector<std::wstring>  > ();
				map<wstring, tree<ASTN*>*> sts = yystack_[2].value.as<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > ();
				
				atnn->setInitials(init);
				atnn->setFinals(fin);
				atnn->setStates(sts);
				yylhs.value.as<  ATN::ATNN*  > () = atnn;
			}
#line 878 "parser.cpp" // lalr1.cc:859
    break;

  case 16:
#line 241 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				ATNN* atnn = new ATNN(converter.from_bytes(yystack_[5].value.as< std::string > ()));

				vector<wstring> init = yystack_[2].value.as<  std::vector<std::wstring>  > ();
				vector<wstring> fin = yystack_[3].value.as<  std::vector<std::wstring>  > ();
				map<wstring, tree<ASTN*>*> sts = yystack_[1].value.as<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > ();
				
				atnn->setInitials(init);
				atnn->setFinals(fin);
				atnn->setStates(sts);
				yylhs.value.as<  ATN::ATNN*  > () = atnn;
			}
#line 895 "parser.cpp" // lalr1.cc:859
    break;

  case 17:
#line 254 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				ATNN* atnn = new ATNN(converter.from_bytes(yystack_[5].value.as< std::string > ()));

				vector<wstring> init = yystack_[1].value.as<  std::vector<std::wstring>  > ();
				vector<wstring> fin = yystack_[3].value.as<  std::vector<std::wstring>  > ();
				map<wstring, tree<ASTN*>*> sts = yystack_[2].value.as<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > ();
				
				atnn->setInitials(init);
				atnn->setFinals(fin);
				atnn->setStates(sts);
				yylhs.value.as<  ATN::ATNN*  > () = atnn;
			}
#line 912 "parser.cpp" // lalr1.cc:859
    break;

  case 18:
#line 267 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				ATNN* atnn = new ATNN(converter.from_bytes(yystack_[5].value.as< std::string > ()));

				vector<wstring> init = yystack_[2].value.as<  std::vector<std::wstring>  > ();
				vector<wstring> fin = yystack_[1].value.as<  std::vector<std::wstring>  > ();
				map<wstring, tree<ASTN*>*> sts = yystack_[3].value.as<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > ();
				
				atnn->setInitials(init);
				atnn->setFinals(fin);
				atnn->setStates(sts);
				yylhs.value.as<  ATN::ATNN*  > () = atnn;
			}
#line 929 "parser.cpp" // lalr1.cc:859
    break;

  case 19:
#line 280 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				ATNN* atnn = new ATNN(converter.from_bytes(yystack_[5].value.as< std::string > ()));

				vector<wstring> init = yystack_[1].value.as<  std::vector<std::wstring>  > ();
				vector<wstring> fin = yystack_[2].value.as<  std::vector<std::wstring>  > ();
				map<wstring, tree<ASTN*>*> sts = yystack_[3].value.as<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > ();

				atnn->setInitials(init);
				atnn->setFinals(fin);
				atnn->setStates(sts);
				yylhs.value.as<  ATN::ATNN*  > () = atnn;
			}
#line 946 "parser.cpp" // lalr1.cc:859
    break;

  case 20:
#line 296 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					vector<wstring> v;
					tree<ASTN*>* t = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>::const_iterator it = t->begin();
					for (int i = 0; i < t->num_children(); ++i) {
						tree<ASTN*>* tr = new tree<ASTN*>(it.nth_child_ref(i));
						wstring id = (*(tr->begin()))->getValueWstring();
						v.push_back(id);
					}
					yylhs.value.as<  std::vector<std::wstring>  > () = v;
				}
#line 962 "parser.cpp" // lalr1.cc:859
    break;

  case 21:
#line 311 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					vector<wstring> v;
					tree<ASTN*>* t = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>::const_iterator it = t->begin();
					for (int i = 0; i < t->num_children(); ++i) {
						tree<ASTN*>* tr = new tree<ASTN*>(it.nth_child_ref(i));
						wstring id = (*(tr->begin()))->getValueWstring();
						v.push_back(id);
					}
					yylhs.value.as<  std::vector<std::wstring>  > () = v;
				}
#line 978 "parser.cpp" // lalr1.cc:859
    break;

  case 22:
#line 326 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"ID LIST"));
				tree<ASTN*>* id = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[0].value.as< std::string > ())));

				t->add_child(*id);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
			}
#line 990 "parser.cpp" // lalr1.cc:859
    break;

  case 23:
#line 334 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* t = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
				tree<ASTN*>* id = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[0].value.as< std::string > ())));

				t->add_child(*id);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
			}
#line 1002 "parser.cpp" // lalr1.cc:859
    break;

  case 24:
#line 345 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				map<wstring, tree<ASTN*>*> m;
				tree<ASTN*>* t = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();
				m[(*(t->begin()))->getValueWstring()] = t;
				yylhs.value.as<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > () = m;
			}
#line 1013 "parser.cpp" // lalr1.cc:859
    break;

  case 25:
#line 352 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				map<wstring, tree<ASTN*>*> m = yystack_[1].value.as<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > ();
				tree<ASTN*>* t = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();
				m[(*(t->begin()))->getValueWstring()] = t;
				yylhs.value.as<  std::map<std::wstring, freeling::tree<ATN::ASTN*>*>  > () = m;
			}
#line 1024 "parser.cpp" // lalr1.cc:859
    break;

  case 26:
#line 362 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"STATE", converter.from_bytes(yystack_[8].value.as< std::string > ())));
				
				tree<ASTN*>* act = new tree<ASTN*>(new ASTN(L"ACTION"));
				tree<ASTN*>* instr = yystack_[5].value.as<  freeling::tree<ATN::ASTN*>*  > ();
				act->add_child(*instr);

				tree<ASTN*>* trans = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				t->add_child(*act);
				t->add_child(*trans);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
			}
#line 1042 "parser.cpp" // lalr1.cc:859
    break;

  case 27:
#line 376 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"STATE", converter.from_bytes(yystack_[8].value.as< std::string > ())));
				
				tree<ASTN*>* act = new tree<ASTN*>(new ASTN(L"ACTION"));
				tree<ASTN*>* instr = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();
				act->add_child(*instr);

				tree<ASTN*>* trans = yystack_[4].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				t->add_child(*act);
				t->add_child(*trans);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
			}
#line 1060 "parser.cpp" // lalr1.cc:859
    break;

  case 28:
#line 393 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"TRANSITION"));
						}
#line 1068 "parser.cpp" // lalr1.cc:859
    break;

  case 29:
#line 397 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"TRANSITION"));
							tree<ASTN*>* trans = new tree<ASTN*>(new ASTN(L"TO"));
							tree<ASTN*>* id = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[5].value.as< std::string > ())));
							tree<ASTN*>* cond = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							trans->add_child(*id);
							trans->add_child(*cond);
							t->add_child(*trans);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
						}
#line 1084 "parser.cpp" // lalr1.cc:859
    break;

  case 30:
#line 409 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* t = yystack_[7].value.as<  freeling::tree<ATN::ASTN*>*  > ();
							tree<ASTN*>* trans = new tree<ASTN*>(new ASTN(L"TO"));
							tree<ASTN*>* id = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[5].value.as< std::string > ())));
							tree<ASTN*>* cond = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							trans->add_child(*id);
							trans->add_child(*cond);
							t->add_child(*trans);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
						}
#line 1100 "parser.cpp" // lalr1.cc:859
    break;

  case 31:
#line 424 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();
						}
#line 1108 "parser.cpp" // lalr1.cc:859
    break;

  case 32:
#line 431 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"BODY"));
						}
#line 1116 "parser.cpp" // lalr1.cc:859
    break;

  case 33:
#line 435 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* body = new tree<ASTN*>(new ASTN(L"BODY"));
							tree<ASTN*>* instruction = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							body->add_child(*instruction);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = body;
						}
#line 1128 "parser.cpp" // lalr1.cc:859
    break;

  case 34:
#line 443 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* body = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();
							tree<ASTN*>* instruction = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							body->add_child(*instruction);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = body;
						}
#line 1140 "parser.cpp" // lalr1.cc:859
    break;

  case 35:
#line 455 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1146 "parser.cpp" // lalr1.cc:859
    break;

  case 36:
#line 457 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1152 "parser.cpp" // lalr1.cc:859
    break;

  case 37:
#line 459 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1158 "parser.cpp" // lalr1.cc:859
    break;

  case 38:
#line 461 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1164 "parser.cpp" // lalr1.cc:859
    break;

  case 39:
#line 463 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1170 "parser.cpp" // lalr1.cc:859
    break;

  case 40:
#line 465 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1176 "parser.cpp" // lalr1.cc:859
    break;

  case 41:
#line 467 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1182 "parser.cpp" // lalr1.cc:859
    break;

  case 42:
#line 469 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1188 "parser.cpp" // lalr1.cc:859
    break;

  case 43:
#line 471 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1194 "parser.cpp" // lalr1.cc:859
    break;

  case 44:
#line 476 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* instr = new tree<ASTN*>(new ASTN(L"ASSIGMENT"));
				tree<ASTN*>* id = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
				tree<ASTN*>* body = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				instr->add_child(*id);
				instr->add_child(*body);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = instr;
			}
#line 1208 "parser.cpp" // lalr1.cc:859
    break;

  case 45:
#line 489 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"TOKEN ID", converter.from_bytes(yystack_[0].value.as< std::string > ())));
			}
#line 1216 "parser.cpp" // lalr1.cc:859
    break;

  case 46:
#line 493 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"OBJECT ACCES"));
				tree<ASTN*>* id = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[2].value.as< std::string > ())));
				tree<ASTN*>* pos = new tree<ASTN*>(new ASTN(L"POSITION", converter.from_bytes(yystack_[0].value.as< std::string > ())));

				n->add_child(*id);
				n->add_child(*pos);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
			}
#line 1230 "parser.cpp" // lalr1.cc:859
    break;

  case 47:
#line 503 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"ARRAY ACCES"));
				tree<ASTN*>* id = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[3].value.as< std::string > ())));
				tree<ASTN*>* pos = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				n->add_child(*id);
				n->add_child(*pos);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
			}
#line 1244 "parser.cpp" // lalr1.cc:859
    break;

  case 48:
#line 516 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* ite = new tree<ASTN*>(new ASTN(L"IF ELSE IF ELSE"));
					tree<ASTN*>* condition = yystack_[4].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* body = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* elseif = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* else_tree = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					ite->add_child(*condition);
					ite->add_child(*body);
					ite->add_child(*elseif);
					ite->add_child(*else_tree);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = ite;
				}
#line 1262 "parser.cpp" // lalr1.cc:859
    break;

  case 49:
#line 533 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"ELSE IF"));
			}
#line 1270 "parser.cpp" // lalr1.cc:859
    break;

  case 50:
#line 537 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* elif = new tree<ASTN*>(new ASTN(L"ELSE IF"));
				tree<ASTN*>* condition = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
				tree<ASTN*>* body = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				elif->add_child(*condition);
				elif->add_child(*body);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = elif;
			}
#line 1284 "parser.cpp" // lalr1.cc:859
    break;

  case 51:
#line 547 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* elif = yystack_[5].value.as<  freeling::tree<ATN::ASTN*>*  > ();
				tree<ASTN*>* condition = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
				tree<ASTN*>* body = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				elif->add_child(*condition);
				elif->add_child(*body);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = elif;
			}
#line 1298 "parser.cpp" // lalr1.cc:859
    break;

  case 52:
#line 560 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"ELSE"));
			}
#line 1306 "parser.cpp" // lalr1.cc:859
    break;

  case 53:
#line 564 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"ELSE"));
				tree<ASTN*>* body = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				t->add_child(*body);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
			}
#line 1318 "parser.cpp" // lalr1.cc:859
    break;

  case 54:
#line 575 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"WHILE"));
					tree<ASTN*>* condition = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* body = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					t->add_child(*condition);
					t->add_child(*body);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
				}
#line 1332 "parser.cpp" // lalr1.cc:859
    break;

  case 55:
#line 588 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"FOR"));
					tree<ASTN*>* init = yystack_[6].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* condition = yystack_[4].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* final = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* body = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					t->add_child(*init);
					t->add_child(*condition);
					t->add_child(*final);
					t->add_child(*body);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
				}
#line 1350 "parser.cpp" // lalr1.cc:859
    break;

  case 56:
#line 605 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"ASSIGMENT")); }
#line 1356 "parser.cpp" // lalr1.cc:859
    break;

  case 57:
#line 607 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1362 "parser.cpp" // lalr1.cc:859
    break;

  case 58:
#line 612 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"INCREMENTAL")); }
#line 1368 "parser.cpp" // lalr1.cc:859
    break;

  case 59:
#line 614 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1374 "parser.cpp" // lalr1.cc:859
    break;

  case 60:
#line 616 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1380 "parser.cpp" // lalr1.cc:859
    break;

  case 61:
#line 621 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* dowhile = new tree<ASTN*>(new ASTN(L"DO WHILE"));
					tree<ASTN*>* body = yystack_[4].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* condition = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					dowhile->add_child(*body);
					dowhile->add_child(*condition);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = dowhile;
				}
#line 1394 "parser.cpp" // lalr1.cc:859
    break;

  case 62:
#line 633 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"RETURN"));
				}
#line 1402 "parser.cpp" // lalr1.cc:859
    break;

  case 63:
#line 637 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"RETURN"));
					tree<ASTN*>* expr = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					t->add_child(*expr);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
				}
#line 1414 "parser.cpp" // lalr1.cc:859
    break;

  case 64:
#line 648 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"PRINT"));
					tree<ASTN*>* e = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					t->add_child(*e);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
				}
#line 1426 "parser.cpp" // lalr1.cc:859
    break;

  case 65:
#line 659 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"PRINT LIST"));
					tree<ASTN*>* e = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					t->add_child(*e);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
				}
#line 1438 "parser.cpp" // lalr1.cc:859
    break;

  case 66:
#line 667 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* t = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* e = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					t->add_child(*e);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
				}
#line 1450 "parser.cpp" // lalr1.cc:859
    break;

  case 67:
#line 677 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1456 "parser.cpp" // lalr1.cc:859
    break;

  case 68:
#line 679 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"ENDL")); }
#line 1462 "parser.cpp" // lalr1.cc:859
    break;

  case 69:
#line 683 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1468 "parser.cpp" // lalr1.cc:859
    break;

  case 70:
#line 684 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1474 "parser.cpp" // lalr1.cc:859
    break;

  case 71:
#line 685 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1480 "parser.cpp" // lalr1.cc:859
    break;

  case 72:
#line 686 "freeling/morfo/parser.y" // lalr1.cc:859
    { yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > (); }
#line 1486 "parser.cpp" // lalr1.cc:859
    break;

  case 73:
#line 691 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				bool b = yystack_[0].value.as< std::string > () == "true" || yystack_[0].value.as< std::string > () == "TRUE";
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"TOKEN BOOL", b));
			}
#line 1495 "parser.cpp" // lalr1.cc:859
    break;

  case 74:
#line 696 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"TOKEN INT", yystack_[0].value.as< int > ()));
			}
#line 1503 "parser.cpp" // lalr1.cc:859
    break;

  case 75:
#line 700 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"TOKEN DOUBLE", yystack_[0].value.as< float > ()));
			}
#line 1511 "parser.cpp" // lalr1.cc:859
    break;

  case 76:
#line 704 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				string s = yystack_[0].value.as< std::string > ().substr(1, yystack_[0].value.as< std::string > ().length() - 2);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"TOKEN STRING", converter.from_bytes(s)));
			}
#line 1520 "parser.cpp" // lalr1.cc:859
    break;

  case 77:
#line 709 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"TOKEN ID", converter.from_bytes(yystack_[0].value.as< std::string > ())));
			}
#line 1528 "parser.cpp" // lalr1.cc:859
    break;

  case 78:
#line 713 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"OBJECT ACCES"));
				tree<ASTN*>* id = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[2].value.as< std::string > ())));
				tree<ASTN*>* pos = new tree<ASTN*>(new ASTN(L"POSITION", converter.from_bytes(yystack_[0].value.as< std::string > ())));

				n->add_child(*id);
				n->add_child(*pos);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
			}
#line 1542 "parser.cpp" // lalr1.cc:859
    break;

  case 79:
#line 723 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"ARRAY ACCES"));
				tree<ASTN*>* id = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[3].value.as< std::string > ())));
				tree<ASTN*>* pos = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				n->add_child(*id);
				n->add_child(*pos);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
			}
#line 1556 "parser.cpp" // lalr1.cc:859
    break;

  case 80:
#line 733 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"TOKEN OBJECT"));
				tree<ASTN*>* list = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				n->add_child(*list);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
			}
#line 1568 "parser.cpp" // lalr1.cc:859
    break;

  case 81:
#line 741 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"TOKEN ARRAY"));
				tree<ASTN*>* list = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				n->add_child(*list);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
			}
#line 1580 "parser.cpp" // lalr1.cc:859
    break;

  case 82:
#line 749 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();
			}
#line 1588 "parser.cpp" // lalr1.cc:859
    break;

  case 83:
#line 753 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();
			}
#line 1596 "parser.cpp" // lalr1.cc:859
    break;

  case 84:
#line 757 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"NOT"));
				tree<ASTN*>* expr = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				n->add_child(*expr);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
			}
#line 1608 "parser.cpp" // lalr1.cc:859
    break;

  case 85:
#line 765 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"NEG"));
				tree<ASTN*>* expr = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				n->add_child(*expr);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
			}
#line 1620 "parser.cpp" // lalr1.cc:859
    break;

  case 86:
#line 773 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"POS"));
				tree<ASTN*>* expr = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				n->add_child(*expr);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
			}
#line 1632 "parser.cpp" // lalr1.cc:859
    break;

  case 87:
#line 781 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();
			}
#line 1640 "parser.cpp" // lalr1.cc:859
    break;

  case 88:
#line 789 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"PLUS"));
							tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
							tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							n->add_child(*expr1);
							n->add_child(*expr2);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
						}
#line 1654 "parser.cpp" // lalr1.cc:859
    break;

  case 89:
#line 799 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"MINUS"));
							tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
							tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							n->add_child(*expr1);
							n->add_child(*expr2);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
						}
#line 1668 "parser.cpp" // lalr1.cc:859
    break;

  case 90:
#line 809 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"MULT"));
							tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
							tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							n->add_child(*expr1);
							n->add_child(*expr2);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
						}
#line 1682 "parser.cpp" // lalr1.cc:859
    break;

  case 91:
#line 819 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"DIV"));
							tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
							tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							n->add_child(*expr1);
							n->add_child(*expr2);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
						}
#line 1696 "parser.cpp" // lalr1.cc:859
    break;

  case 92:
#line 829 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"MOD"));
							tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
							tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							n->add_child(*expr1);
							n->add_child(*expr2);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
						}
#line 1710 "parser.cpp" // lalr1.cc:859
    break;

  case 93:
#line 842 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"EQUAL"));
						tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
						tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						n->add_child(*expr1);
						n->add_child(*expr2);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
					}
#line 1724 "parser.cpp" // lalr1.cc:859
    break;

  case 94:
#line 852 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"NOT_EQUAL"));
						tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
						tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						n->add_child(*expr1);
						n->add_child(*expr2);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
					}
#line 1738 "parser.cpp" // lalr1.cc:859
    break;

  case 95:
#line 862 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"LT"));
						tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
						tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						n->add_child(*expr1);
						n->add_child(*expr2);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
					}
#line 1752 "parser.cpp" // lalr1.cc:859
    break;

  case 96:
#line 872 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"LE"));
						tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
						tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						n->add_child(*expr1);
						n->add_child(*expr2);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
					}
#line 1766 "parser.cpp" // lalr1.cc:859
    break;

  case 97:
#line 882 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"GT"));
						tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
						tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						n->add_child(*expr1);
						n->add_child(*expr2);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
					}
#line 1780 "parser.cpp" // lalr1.cc:859
    break;

  case 98:
#line 892 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"GE"));
						tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
						tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						n->add_child(*expr1);
						n->add_child(*expr2);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
					}
#line 1794 "parser.cpp" // lalr1.cc:859
    break;

  case 99:
#line 902 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"AND"));
						tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
						tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						n->add_child(*expr1);
						n->add_child(*expr2);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
					}
#line 1808 "parser.cpp" // lalr1.cc:859
    break;

  case 100:
#line 912 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"OR"));
						tree<ASTN*>* expr1 = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
						tree<ASTN*>* expr2 = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						n->add_child(*expr1);
						n->add_child(*expr2);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
					}
#line 1822 "parser.cpp" // lalr1.cc:859
    break;

  case 101:
#line 925 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"LOCAL FUNCTION", converter.from_bytes(yystack_[3].value.as< std::string > ())));
						tree<ASTN*>* id = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[5].value.as< std::string > ())));
						tree<ASTN*>* list = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						n->add_child(*id);
						n->add_child(*list);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
					}
#line 1836 "parser.cpp" // lalr1.cc:859
    break;

  case 102:
#line 938 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"DPLUS"));
							tree<ASTN*>* e = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							n->add_child(*e);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
						}
#line 1848 "parser.cpp" // lalr1.cc:859
    break;

  case 103:
#line 946 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"DPLUSR"));
							tree<ASTN*>* e = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							n->add_child(*e);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
						}
#line 1860 "parser.cpp" // lalr1.cc:859
    break;

  case 104:
#line 954 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"DMINUS"));
							tree<ASTN*>* e = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							n->add_child(*e);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
						}
#line 1872 "parser.cpp" // lalr1.cc:859
    break;

  case 105:
#line 962 "freeling/morfo/parser.y" // lalr1.cc:859
    {
							tree<ASTN*>* n = new tree<ASTN*>(new ASTN(L"DMINUSR"));
							tree<ASTN*>* e = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();

							n->add_child(*e);
							yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = n;
						}
#line 1884 "parser.cpp" // lalr1.cc:859
    break;

  case 106:
#line 973 "freeling/morfo/parser.y" // lalr1.cc:859
    {
				tree<ASTN*>* funcall = new tree<ASTN*>(new ASTN(L"FUNCALL", converter.from_bytes(yystack_[3].value.as< std::string > ())));
				tree<ASTN*>* list = yystack_[1].value.as<  freeling::tree<ATN::ASTN*>*  > ();

				funcall->add_child(*list);
				yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = funcall;
			}
#line 1896 "parser.cpp" // lalr1.cc:859
    break;

  case 107:
#line 984 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"EXPR LIST"));
				}
#line 1904 "parser.cpp" // lalr1.cc:859
    break;

  case 108:
#line 988 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* list = new tree<ASTN*>(new ASTN(L"EXPR LIST"));
					tree<ASTN*>* expr = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					list->add_child(*expr);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = list;
				}
#line 1916 "parser.cpp" // lalr1.cc:859
    break;

  case 109:
#line 996 "freeling/morfo/parser.y" // lalr1.cc:859
    {
					tree<ASTN*>* list = yystack_[2].value.as<  freeling::tree<ATN::ASTN*>*  > ();
					tree<ASTN*>* expr = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

					list->add_child(*expr);
					yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = list;
				}
#line 1928 "parser.cpp" // lalr1.cc:859
    break;

  case 110:
#line 1007 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = new tree<ASTN*>(new ASTN(L"OBJECT LIST"));
					}
#line 1936 "parser.cpp" // lalr1.cc:859
    break;

  case 111:
#line 1011 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* t = new tree<ASTN*>(new ASTN(L"OBJECT LIST"));
						tree<ASTN*>* obj = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[2].value.as< std::string > ())));
						tree<ASTN*>* body = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						obj->add_child(*body);
						t->add_child(*obj);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
					}
#line 1950 "parser.cpp" // lalr1.cc:859
    break;

  case 112:
#line 1021 "freeling/morfo/parser.y" // lalr1.cc:859
    {
						tree<ASTN*>* t = yystack_[4].value.as<  freeling::tree<ATN::ASTN*>*  > ();
						tree<ASTN*>* obj = new tree<ASTN*>(new ASTN(L"ID", converter.from_bytes(yystack_[2].value.as< std::string > ())));
						tree<ASTN*>* body = yystack_[0].value.as<  freeling::tree<ATN::ASTN*>*  > ();

						obj->add_child(*body);
						t->add_child(*obj);
						yylhs.value.as<  freeling::tree<ATN::ASTN*>*  > () = t;
					}
#line 1964 "parser.cpp" // lalr1.cc:859
    break;


#line 1968 "parser.cpp" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
   Parser ::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
   Parser ::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char  Parser ::yypact_ninf_ = -103;

  const signed char  Parser ::yytable_ninf_ = -48;

  const short int
   Parser ::yypact_[] =
  {
    -103,    35,  -103,   -12,    -8,    10,   157,  -103,  -103,    52,
    -103,    54,    26,  -103,    -2,   161,  -103,    50,  -103,    85,
    -103,    82,    84,   129,   -16,   138,   161,  -103,  -103,    -2,
     125,   144,   131,   131,   146,   -16,   146,   138,   147,   152,
    -103,  -103,   371,  -103,   179,  -103,   188,   225,    25,   174,
      39,   193,   210,   235,   248,   269,   270,   125,   282,    75,
      76,   257,   257,   363,  -103,   289,   124,  -103,  -103,  -103,
    -103,   302,   306,   307,   308,   125,   303,   276,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,     5,   299,    75,    75,
     296,   257,    75,    75,   281,  -103,  -103,  -103,  -103,    41,
      75,    75,    75,   201,   383,  -103,  -103,  -103,  -103,  -103,
    -103,   294,    75,    75,   133,  -103,  -103,  -103,  -103,  -103,
      75,  -103,  -103,  -103,  -103,  -103,  -103,   286,   287,  -103,
    -103,  -103,   383,     5,   154,   171,   328,  -103,   309,   332,
     196,   383,   134,   342,     3,   231,    75,  -103,  -103,  -103,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,  -103,   113,   105,   383,   341,   316,    -5,
    -103,   125,   125,    75,    75,  -103,    75,  -103,    75,   317,
    -103,   220,   348,   320,   397,   410,   178,   178,   178,   178,
     178,   178,   181,   181,  -103,  -103,  -103,  -103,  -103,   287,
     339,   327,   321,   340,  -103,   213,    27,   383,   383,   365,
      75,   222,    -4,   364,   125,   359,   370,   256,  -103,   -27,
      75,   130,   367,    75,   377,   374,    75,   125,   375,  -103,
    -103,   382,  -103,   383,  -103,  -103,   238,  -103,    75,   255,
    -103,    75,   125,   392,   280,   125,   297,  -103,  -103,   393,
    -103,   125,  -103,  -103
  };

  const unsigned char
   Parser ::yydefact_[] =
  {
       2,     0,     1,     0,     0,     0,     0,     4,     5,     0,
       6,     0,     0,     3,     9,     0,     7,     0,    13,     0,
      10,     0,     0,     0,     0,     0,     0,    24,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    11,    32,     8,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      45,     0,     0,     0,    33,     0,     0,    36,    37,    38,
      39,     0,     0,     0,     0,     0,     0,     0,    20,    21,
      14,    15,    16,    17,    18,    19,     0,    64,     0,     0,
       0,    56,     0,   107,   110,    73,    74,    75,    76,    77,
       0,     0,     0,     0,    63,    69,    70,    71,    72,    87,
      82,     0,   107,     0,    45,   102,   104,    31,    34,    35,
       0,   103,   105,    41,    43,    42,    40,     0,    28,    23,
      68,    65,    67,     0,     0,     0,     0,    57,     0,     0,
       0,   108,     0,     0,     0,     0,     0,    86,    85,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,    44,     0,     0,     0,
      66,     0,     0,     0,     0,    83,     0,    81,     0,     0,
      80,    78,     0,     0,   100,    99,    93,    94,    95,    96,
      97,    98,    88,    89,    90,    91,    92,   106,    47,    28,
       0,     0,     0,    49,    54,     0,     0,   109,   111,     0,
     107,    79,     0,     0,     0,     0,     0,    52,    61,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      59,     0,    60,   112,   101,    26,     0,    27,     0,     0,
      53,     0,     0,     0,     0,     0,     0,    55,    29,     0,
      50,     0,    30,    51
  };

  const short int
   Parser ::yypgoto_[] =
  {
    -103,  -103,  -103,  -103,  -103,   373,  -103,   103,   106,   366,
     148,   369,   204,   -57,  -103,   337,   -88,   -41,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,  -103,   272,
     -55,  -103,  -103,  -103,  -103,   -40,   -36,  -102,  -103
  };

  const short int
   Parser ::yydefgoto_[] =
  {
      -1,     1,     6,     7,    19,    20,     8,    24,    25,    46,
      26,    27,   169,    43,    63,    64,    65,   103,    67,   217,
     229,    68,    69,   139,   231,    70,    71,    72,    87,   131,
     141,   105,   106,   107,   108,   109,   110,   142,   144
  };

  const short int
   Parser ::yytable_[] =
  {
      90,    66,    73,   137,   104,    17,    74,   179,   201,   222,
     164,   114,    21,    92,    23,    93,   180,    94,   127,   130,
     115,   116,    66,    73,    61,    62,     9,    74,   202,   202,
      10,   132,   219,   134,   135,     2,    18,   140,    80,    95,
      96,    97,    98,    99,   145,   147,   148,   149,    11,   112,
     138,   146,    82,    21,   100,   101,    61,    62,   165,     3,
      14,     4,     5,   102,    16,   166,    15,    21,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   132,   111,
     160,   161,   162,    92,   112,    93,   113,    94,    28,    29,
      32,   183,   -45,   -45,    30,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   221,    95,
      96,    97,    98,    99,   203,   204,   198,   176,   205,   206,
      31,   207,   197,   208,   100,   101,    61,    62,    36,    38,
      34,   230,    39,   102,   176,    33,   111,    42,   176,   234,
      51,    49,    53,   113,    52,   177,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,    44,   224,   160,   161,
     162,    12,    13,   171,   120,   233,    21,    22,   236,    45,
     240,   239,    35,    37,    21,   121,   122,    23,    66,   232,
     172,    22,    48,   244,    50,   247,   246,    81,   250,    21,
      22,    23,    77,    78,   253,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   175,    83,   160,   161,   162,
      75,    76,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   218,    84,   160,   161,   162,   158,   159,    77,
      79,   160,   161,   162,   160,   161,   162,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   243,    85,   160,
     161,   162,   121,   122,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   245,    86,   160,   161,   162,   181,
     182,   -46,   -46,   -47,   -47,   227,   228,    88,    89,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   249,
      91,   160,   161,   162,   119,   114,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   251,   123,   160,   161,
     162,   124,   125,   126,   129,   128,   133,   136,   167,   143,
     168,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   211,   163,   160,   161,   162,   173,   174,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   178,   120,
     160,   161,   162,   199,   200,   209,   210,   213,   214,   215,
     216,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   220,   223,   160,   161,   162,   117,   225,   226,    54,
     235,    55,   238,   241,    56,    57,    58,    54,    59,    55,
     237,   242,    56,    57,    58,    40,    59,   248,   252,    47,
     118,    60,    41,   212,    40,   170,    40,     0,     0,    60,
       0,     0,     0,     0,    61,    62,     0,    40,     0,    40,
       0,     0,    61,    62,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,     0,     0,   160,   161,   162,   151,
     152,   153,   154,   155,   156,   157,   158,   159,     0,     0,
     160,   161,   162,   152,   153,   154,   155,   156,   157,   158,
     159,     0,     0,   160,   161,   162
  };

  const short int
   Parser ::yycheck_[] =
  {
      57,    42,    42,    91,    59,     7,    42,     4,    13,    13,
     112,    38,    28,     8,    30,    10,    13,    12,    75,    14,
      61,    62,    63,    63,    51,    52,    38,    63,    33,    33,
      38,    86,     5,    88,    89,     0,    38,    92,    13,    34,
      35,    36,    37,    38,     3,   100,   101,   102,    38,     8,
      91,    10,    13,    28,    49,    50,    51,    52,   113,    24,
       8,    26,    27,    58,    38,   120,    12,    28,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   133,     3,
      53,    54,    55,     8,     8,    10,    10,    12,    38,     4,
       6,   146,    51,    52,     9,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   210,    34,
      35,    36,    37,    38,   171,   172,    11,     4,   173,   174,
      38,   176,     9,   178,    49,    50,    51,    52,    25,    26,
      24,   219,    26,    58,     4,     6,     3,    12,     4,     9,
      37,    35,    39,    10,    38,    11,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    12,   214,    53,    54,
      55,     4,     5,     9,    40,   220,    28,    29,   223,    38,
     227,   226,    24,    25,    28,    51,    52,    30,   219,   219,
       9,    29,    34,   238,    36,   242,   241,    13,   245,    28,
      29,    30,     4,     5,   251,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     9,    13,    53,    54,    55,
      31,    32,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     9,    13,    53,    54,    55,    49,    50,     4,
       5,    53,    54,    55,    53,    54,    55,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     9,    13,    53,
      54,    55,    51,    52,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     9,    17,    53,    54,    55,    38,
      39,    51,    52,    51,    52,    19,    20,     8,     8,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     9,
       8,    53,    54,    55,     5,    38,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     9,     5,    53,    54,
      55,     5,     5,     5,    38,    12,    17,    21,    32,    38,
      33,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    11,    38,    53,    54,    55,     8,     5,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     6,    40,
      53,    54,    55,    12,    38,    38,     8,    18,    31,    38,
      20,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     6,     8,    53,    54,    55,    13,    18,     8,    16,
      13,    18,     8,     8,    21,    22,    23,    16,    25,    18,
      13,     9,    21,    22,    23,    26,    25,     5,     5,    33,
      63,    38,    29,   199,    35,   133,    37,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    51,    52,    -1,    48,    -1,    50,
      -1,    -1,    51,    52,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    -1,    53,    54,    55,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    54,    55,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    53,    54,    55
  };

  const unsigned char
   Parser ::yystos_[] =
  {
       0,    61,     0,    24,    26,    27,    62,    63,    66,    38,
      38,    38,     4,     5,     8,    12,    38,     7,    38,    64,
      65,    28,    29,    30,    67,    68,    70,    71,    38,     4,
       9,    38,     6,     6,    68,    70,    67,    70,    67,    68,
      71,    65,    12,    73,    12,    38,    69,    69,    70,    68,
      70,    67,    68,    67,    16,    18,    21,    22,    23,    25,
      38,    51,    52,    74,    75,    76,    77,    78,    81,    82,
      85,    86,    87,    95,    96,    31,    32,     4,     5,     5,
      13,    13,    13,    13,    13,    13,    17,    88,     8,     8,
      73,     8,     8,    10,    12,    34,    35,    36,    37,    38,
      49,    50,    58,    77,    90,    91,    92,    93,    94,    95,
      96,     3,     8,    10,    38,    77,    77,    13,    75,     5,
      40,    51,    52,     5,     5,     5,     5,    73,    12,    38,
      14,    89,    90,    17,    90,    90,    21,    76,    77,    83,
      90,    90,    97,    38,    98,     3,    10,    90,    90,    90,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      53,    54,    55,    38,    97,    90,    90,    32,    33,    72,
      89,     9,     9,     8,     5,     9,     4,    11,     6,     4,
      13,    38,    39,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,     9,    11,    12,
      38,    13,    33,    73,    73,    90,    90,    90,    90,    38,
       8,    11,    72,    18,    31,    38,    20,    79,     9,     5,
       6,    97,    13,     8,    73,    18,     8,    19,    20,    80,
      76,    84,    95,    90,     9,    13,    90,    13,     8,    90,
      73,     8,     9,     9,    90,     9,    90,    73,     5,     9,
      73,     9,     5,    73
  };

  const unsigned char
   Parser ::yyr1_[] =
  {
       0,    60,    61,    61,    61,    61,    62,    62,    63,    64,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      67,    68,    69,    69,    70,    70,    71,    71,    72,    72,
      72,    73,    74,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    77,    77,    77,    78,    79,
      79,    79,    80,    80,    81,    82,    83,    83,    84,    84,
      84,    85,    86,    86,    87,    88,    88,    89,    89,    90,
      90,    90,    90,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    95,    95,    95,    95,    96,    97,    97,    97,
      98,    98,    98
  };

  const unsigned char
   Parser ::yyr2_[] =
  {
       0,     2,     0,     3,     2,     2,     2,     3,     6,     0,
       1,     3,     2,     1,     7,     7,     7,     7,     7,     7,
       4,     4,     1,     3,     1,     2,    10,    10,     0,     7,
       8,     3,     0,     1,     2,     2,     1,     1,     1,     1,
       2,     2,     2,     2,     3,     1,     3,     4,     7,     0,
       5,     6,     0,     2,     5,     9,     0,     1,     0,     1,
       1,     6,     1,     2,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     3,     1,     3,     2,     2,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     6,     2,     2,     2,     2,     4,     0,     1,     3,
       0,     3,     5
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const  Parser ::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\"dot\"", "\"comma\"",
  "\"semicolon\"", "\"colon\"", "\"andpersand\"", "\"open parenthesis\"",
  "\"close parenthesis\"", "\"open bracket\"", "\"close bracket\"",
  "\"open bracer\"", "\"close bracer\"", "\"end of line\"",
  "\"not defined\"", "\"print\"", "\"<<\"", "\"if\"", "\"else\"",
  "\"else if\"", "\"while\"", "\"do\"", "\"for\"", "\"function\"",
  "\"return\"", "\"global\"", "\"atn\"", "\"state\"", "\"initial states\"",
  "\"final states\"", "\"action\"", "\"transition\"", "\"to\"", "\"bool\"",
  "\"int\"", "\"double\"", "\"string\"", "\"id\"", "\"local function\"",
  "ASSIGMENT", "OR", "AND", "EQUAL", "NOT_EQUAL", "LT", "LE", "GT", "GE",
  "PLUS", "MINUS", "DPLUS", "DMINUS", "MULT", "DIV", "MOD", "NEG", "POS",
  "NOT", "POW", "$accept", "program", "global", "func", "param_list",
  "param", "atn", "initials", "finals", "id_list", "states", "state",
  "transition_list", "block_instructions", "instruction_list",
  "instruction", "assign", "ids", "ite_stmt", "else_if", "else",
  "while_stmt", "for_stmt", "init", "incremental", "dowhile_stmt",
  "return_stmt", "print_stmt", "print_list", "element_to_print", "expr",
  "atom", "arithmetical_expr", "boolean_expr", "local_functions",
  "double_arithmetic", "funcall", "expr_list", "object_list", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
   Parser ::yyrline_[] =
  {
       0,   132,   132,   133,   137,   143,   151,   157,   166,   180,
     183,   191,   203,   207,   214,   227,   240,   253,   266,   279,
     295,   310,   325,   333,   344,   351,   361,   375,   393,   396,
     408,   423,   431,   434,   442,   454,   456,   458,   460,   462,
     464,   466,   468,   470,   475,   488,   492,   502,   515,   533,
     536,   546,   560,   563,   574,   587,   605,   606,   612,   613,
     615,   620,   632,   636,   647,   658,   666,   676,   678,   683,
     684,   685,   686,   690,   695,   699,   703,   708,   712,   722,
     732,   740,   748,   752,   756,   764,   772,   780,   788,   798,
     808,   818,   828,   841,   851,   861,   871,   881,   891,   901,
     911,   924,   937,   945,   953,   961,   972,   984,   987,   995,
    1007,  1010,  1020
  };

  // Print the state stack on the debug stream.
  void
   Parser ::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
   Parser ::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 9 "freeling/morfo/parser.y" // lalr1.cc:1167
} //  ATN 
#line 2554 "parser.cpp" // lalr1.cc:1167
#line 1033 "freeling/morfo/parser.y" // lalr1.cc:1168



// Bison expects us to provide implementation - otherwise linker complains
void ATN::Parser::error(const location &loc , const std::string &message) {
    cout << "Error: " << message << endl << "Error location: " << driver.location() << endl << "Row: " << driver.row() << "  Column: " << driver.column() << endl;
}
