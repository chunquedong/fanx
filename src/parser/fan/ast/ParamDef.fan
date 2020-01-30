//
// Copyright (c) 2006, Brian Frank and Andy Frank
// Licensed under the Academic Free License version 3.0
//
// History:
//   19 Jul 06  Brian Frank  Creation
//

**
** ParamDef models the definition of a method parameter.
**
class ParamDef : Node
{

//////////////////////////////////////////////////////////////////////////
// Construction
//////////////////////////////////////////////////////////////////////////

  new make(Loc loc, TypeRef paramType, Str name, Expr? def := null)
    : super(loc)
  {
    this.paramType = paramType
    this.name = name
    this.def  = def
  }

//////////////////////////////////////////////////////////////////////////
// CParam
//////////////////////////////////////////////////////////////////////////

  Bool hasDefault() { def != null }

//////////////////////////////////////////////////////////////////////////
// Debug
//////////////////////////////////////////////////////////////////////////

  override Str toStr()
  {
    return "$paramType $name"
  }

  override Void print(AstWriter out)
  {
    out.w(paramType).w(" ").w(name)
    if (def != null) { out.w(" := "); def.print(out) }
  }

//////////////////////////////////////////////////////////////////////////
// Fields
//////////////////////////////////////////////////////////////////////////

  TypeRef paramType   // type of parameter
  Str name          // local variable name
  Expr? def                  // default expression

}