//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CSLMultiInput_H_
#define CSLMultiInput_H_

//------------------------------------------------------------------------------
#ifndef VCLSupportH
  #include <VCLSupport.h>
#endif

#ifndef CSignalLabBasicPkgRAD_H_
  #include <CSignalLabBasicPkgRAD.h>
#endif
#ifndef CSLStreamTypes_H_
  #include <CSLStreamTypes.h>
#endif
#ifndef CLPComponent_H_
  #include <CLPComponent.h>
#endif
//------------------------------------------------------------------------------




//------------------------------------------------------------------------------
class CTSLMultiInput : public CLPComponent
{
//DOM-IGNORE-BEGIN
  typedef CLPComponent inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Properties
  CLPProperty<int> BufferSize;

public:
  CTSLMultiInput();
};
//------------------------------------------------------------------------------
class CTSLRealMultiInput : public CTSLMultiInput
{
//DOM-IGNORE-BEGIN
  typedef CTSLMultiInput inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWOutputPinProperty OutputPin;

public:
  CTSLRealMultiInput();
};
//------------------------------------------------------------------------------
class CTSLComplexMultiInput : public CTSLMultiInput
{
//DOM-IGNORE-BEGIN
  typedef CTSLMultiInput inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWOutputPinProperty OutputPin;

public:
  CTSLComplexMultiInput();
};
//------------------------------------------------------------------------------
#include <CSLMultiInputCode.h>
//------------------------------------------------------------------------------
#endif   // CSLMultiInput_H_
//------------------------------------------------------------------------------
