//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CSLBasicGenericComplexCode_H_
#define CSLBasicGenericComplexCode_H_

#pragma optimize( "", off )
//------------------------------------------------------------------------------
inline CTSLBasicGenericComplex::CTSLBasicGenericComplex() :
  OnStop( GetInstance(), _T( "OnStop" ) ),
  SynchronizeType( GetInstance(), _T( "SynchronizeType" ) )
{
  LibraryHandle = Get_SignalLabBasicPkgRAD();
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTSLBasicGenericComplex::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
inline void CTSLBasicGenericComplex::SendStartCommand( double ARate )
{
  static void *__0_FuncPtr_ = NULL;
  if( __0_FuncPtr_ == NULL )
    __0_FuncPtr_ = (void *)( GetFunction( "@Slbasicgenericcomplex@TSLBasicGenericComplex@SendStartCommand$qqrd" ));

  VCLHANDLE __0_ThisPtr_ = Get_VCL_FunctionHandle();

  if( __0_FuncPtr_ && __0_ThisPtr_ )
    {
    union
      {
      struct
        {
        DWORD First;
        DWORD Second;
        } Words;
        double Value;
      } __1_Param1;
    __1_Param1.Value = ARate;

    _asm
      {
      push eax
      push __1_Param1.Words.Second
      push __1_Param1.Words.First
      mov  eax,dword ptr [ __0_ThisPtr_ ]
      call dword ptr [ __0_FuncPtr_ ]
      pop  eax
      }
    }

}
//------------------------------------------------------------------------------
inline void CTSLBasicGenericComplex::SendStopCommand()
{
  static void *__0_FuncPtr_ = NULL;
  if( __0_FuncPtr_ == NULL )
    __0_FuncPtr_ = (void *)( GetFunction( "@Slbasicgenericcomplex@TSLBasicGenericComplex@SendStopCommand$qqrv" ));

  VCLHANDLE __0_ThisPtr_ = Get_VCL_FunctionHandle();

  if( __0_FuncPtr_ && __0_ThisPtr_ )
    {
    _asm
      {
      push eax
      mov  eax,dword ptr [ __0_ThisPtr_ ]
      call dword ptr [ __0_FuncPtr_ ]
      pop  eax
      }
    }

}
//------------------------------------------------------------------------------
inline void CTSLBasicGenericComplex::ClearQueue()
{
  static void *__0_FuncPtr_ = NULL;
  if( __0_FuncPtr_ == NULL )
    __0_FuncPtr_ = (void *)( GetFunction( "@Slbasicgenericcomplex@TSLBasicGenericComplex@ClearQueue$qqrv" ));

  VCLHANDLE __0_ThisPtr_ = Get_VCL_FunctionHandle();

  if( __0_FuncPtr_ && __0_ThisPtr_ )
    {
    _asm
      {
      push eax
      mov  eax,dword ptr [ __0_ThisPtr_ ]
      call dword ptr [ __0_FuncPtr_ ]
      pop  eax
      }
    }

}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
inline CTSLBasicStartGenericComplex::CTSLBasicStartGenericComplex() :
  OnStart( GetInstance(), _T( "OnStart" ) )
{
  LibraryHandle = Get_SignalLabBasicPkgRAD();
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTSLBasicStartGenericComplex::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
#pragma optimize( "", on )
#endif   // CSLBasicGenericComplexCode_H_
//------------------------------------------------------------------------------
