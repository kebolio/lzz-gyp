// smtc_DefineClass.h
//

#ifndef LZZ_smtc_DefineClass_h
#define LZZ_smtc_DefineClass_h
#include "smtc_BaseSpecPtrVector.h"
#include "smtc_ClassDefnPtr.h"
#include "smtc_ClassKey.h"
#include "smtc_NamePtr.h"
#include "smtc_ScopePtr.h"
#define LZZ_INLINE inline
namespace smtc
{
  ScopePtr defineClass (ScopePtr const & scope, ClassKey key, NamePtr const & name, bool is_dll_api, BaseSpecPtrVector const & base_spec_set);
}
#undef LZZ_INLINE
#endif
