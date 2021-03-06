//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CILLevelLed_H_
#define CILLevelLed_H_

//------------------------------------------------------------------------------
#ifndef VCLSupportH
  #include <VCLSupport.h>
#endif

#ifndef CInstrumentLabPkgRAD_H_
  #include <CInstrumentLabPkgRAD.h>
#endif
#ifndef CILBasicInstrument_H_
  #include <CILBasicInstrument.h>
#endif
#ifndef CILAnalogInstrument_H_
  #include <CILAnalogInstrument.h>
#endif
#ifndef CULBasicControl_H_
  #include <CULBasicControl.h>
#endif
#ifndef CILLed_H_
  #include <CILLed.h>
#endif
#ifndef CLPTransparentControl_H_
  #include <CLPTransparentControl.h>
#endif
#ifndef CSLControlCollection_H_
  #include <CSLControlCollection.h>
#endif
#ifndef CSLComponentCollection_H_
  #include <CSLComponentCollection.h>
#endif
#ifndef CLPDrawLayers_H_
  #include <CLPDrawLayers.h>
#endif
#ifndef CLPGDIPlusProperties_H_
  #include <CLPGDIPlusProperties.h>
#endif
//------------------------------------------------------------------------------




//------------------------------------------------------------------------------
class CTILBasicLevelLed : public CTILBasicInactiveColorLed
{
//DOM-IGNORE-BEGIN
  typedef CTILBasicInactiveColorLed inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWInputPinProperty EnablePin;

public:    // Class Properties
  class CTLPGPColorItems &Colors;

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILBasicLevelLed();
  virtual ~CTILBasicLevelLed();
};
//------------------------------------------------------------------------------
class CTILExternalLevelLed : public CTILBasicLevelLed
{
//DOM-IGNORE-BEGIN
  typedef CTILBasicLevelLed inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // OpenWire Pins
  CTOWInputPinProperty InputPin;

public:    // Class Properties
  class CTLPGaugeComponentElements &Elements;

public:    // Properties
  CLPProperty<double> Value;
  CLPProperty<double> Max;
  CLPProperty<double> Min;

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILExternalLevelLed();
  virtual ~CTILExternalLevelLed();
};
//------------------------------------------------------------------------------
class CTILLevelLed : public CTILExternalLevelLed
{
//DOM-IGNORE-BEGIN
  typedef CTILExternalLevelLed inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Class Properties
  class CTULControlBackground &Background;

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILLevelLed( HWND hParent );
  CTILLevelLed();
  virtual ~CTILLevelLed();
};
//------------------------------------------------------------------------------
class CTILLevelLedLayer : public CTILExternalLevelLed
{
//DOM-IGNORE-BEGIN
  typedef CTILExternalLevelLed inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILLevelLedLayer( HWND hParent );
  CTILLevelLedLayer();
};
//------------------------------------------------------------------------------
class CTILBasicLevelLedElement : public CTILBasicLevelLed
{
//DOM-IGNORE-BEGIN
  typedef CTILBasicLevelLed inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

};
//------------------------------------------------------------------------------
class CTILLevelLedElement : public CTILBasicLevelLedElement
{
//DOM-IGNORE-BEGIN
  typedef CTILBasicLevelLedElement inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Class Properties
  class CTULElementOffsets &Position;
  class CTULElement2DSize &Size;

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILLevelLedElement( HWND hParent );
  CTILLevelLedElement();
  virtual ~CTILLevelLedElement();
};
//------------------------------------------------------------------------------
class CTILExternalLevelLedElement : public CTILExternalLevelLed
{
//DOM-IGNORE-BEGIN
  typedef CTILExternalLevelLed inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:    // Class Properties
  class CTULElementOffsets &Position;
  class CTULElement2DSize &Size;

public:

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILExternalLevelLedElement( HWND hParent );
  CTILExternalLevelLedElement();
  virtual ~CTILExternalLevelLedElement();
};
//------------------------------------------------------------------------------
class CTILExternalLevelLedMatrixLayer : public CTILExternalLevelLedElement
{
//DOM-IGNORE-BEGIN
  typedef CTILExternalLevelLedElement inherited;
//DOM-IGNORE-END

  VCLHANDLE LibraryHandle;

protected:
  virtual TLPFunctionEntry  GetFunction( const char *function_name );

public:
  virtual void Open( HWND hParent );
  virtual void Open( CLPControl &Parent );

public:
  CTILExternalLevelLedMatrixLayer( HWND hParent );
  CTILExternalLevelLedMatrixLayer();
};
//------------------------------------------------------------------------------
#include <CILLevelLedCode.h>
//------------------------------------------------------------------------------
#endif   // CILLevelLed_H_
//------------------------------------------------------------------------------
