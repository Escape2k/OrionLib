//------------------------------------------------------------------------------
//
//                   Generated by VCL C++/C#.NET FrontEnd.
//                   (C)Copyright Boian Mitov 2005 - 2011
//                              www.mitov.com
//
//------------------------------------------------------------------------------

#ifndef CLPTransparentControlCode_H_
#define CLPTransparentControlCode_H_

#pragma optimize( "", off )
//------------------------------------------------------------------------------
inline CTLPControlProperty::CTLPControlProperty( CLPBaseComponent *a_control, const CLPString a_PropertyName ) :
  inherited( a_control, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTLPControlProperty::CTLPControlProperty( CLPClassProperty *a_property, const CLPString a_PropertyName ) :
  inherited( a_property, a_PropertyName ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTLPControlProperty::CTLPControlProperty( CLPClassProperty *a_property, CTLPControlProperty ( CLPBaseClass::*a_getter )() ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_property)
{
}
//------------------------------------------------------------------------------
inline CTLPControlProperty::CTLPControlProperty( CLPClassProperty *a_property, CTLPControlProperty ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTLPControlProperty ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property)
{
}
//------------------------------------------------------------------------------
inline CTLPControlProperty::CTLPControlProperty( CLPClassProperty *a_property, void ( CLPBaseClass::*a_setter )( CTLPControlProperty ) ) :
  inherited( a_property, _T( "-" ) ),
  m_Property_Getter(NULL),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_property)
{
}
//------------------------------------------------------------------------------
inline CTLPControlProperty::CTLPControlProperty( CLPBaseComponent *a_control, CTLPControlProperty ( CLPBaseClass::*a_getter )() ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(NULL),
  m_Owner_Property(a_control)
{
}
//------------------------------------------------------------------------------
inline CTLPControlProperty::CTLPControlProperty( CLPBaseComponent *a_control, CTLPControlProperty ( CLPBaseClass::*a_getter )(), void ( CLPBaseClass::*a_setter )( CTLPControlProperty ) ) :
  inherited( a_control, _T( "-" ) ),
  m_Property_Getter(a_getter),
  m_Property_Setter(a_setter),
  m_Owner_Property(a_control)
{
}
//------------------------------------------------------------------------------
inline CTLPControlProperty::CTLPControlProperty( VCLHANDLE handle, ELPHandleMode owns_handle ) :
  inherited( handle, owns_handle ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTLPControlProperty::CTLPControlProperty( const CTLPControlProperty &other ) :
  inherited( other ),
  m_Property_Getter( NULL ),
  m_Property_Setter( NULL ),
  m_Owner_Property( NULL )
{
}
//------------------------------------------------------------------------------
inline CTLPControlProperty & CTLPControlProperty::operator = ( const CTLPControlProperty & other )
{
  if( m_Property_Setter )
	  (m_Owner_Property->*m_Property_Setter)( other );

  else
	  inherited::operator = ( other );

  return *this;
}
//------------------------------------------------------------------------------
inline VCLHANDLE CTLPControlProperty::Get_VCL_Handle() const
{
  if( m_Property_Getter )
	  {
		if( ! m_Object )
		  m_Object = new CVCLObject( (m_Owner_Property->*m_Property_Getter)().Get_VCL_Handle() );

	  }

  return inherited::Get_VCL_Handle();
}
//------------------------------------------------------------------------------
inline void CTLPTransparentControl::Open( HWND hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_SignalLabBasicPkgRAD();
}
//------------------------------------------------------------------------------
inline void CTLPTransparentControl::Open( CLPControl &hParent )
{
  inherited::Open( hParent );

  LibraryHandle = ::Get_SignalLabBasicPkgRAD();
}
//------------------------------------------------------------------------------
inline TLPFunctionEntry CTLPTransparentControl::GetFunction( const char *function_name )
{
  TLPFunctionEntry Result = VCL_GetFunction( LibraryHandle, function_name );
  if( Result )
    return Result;

  return inherited::GetFunction( function_name );
}
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
#pragma optimize( "", on )
#endif   // CLPTransparentControlCode_H_
//------------------------------------------------------------------------------
