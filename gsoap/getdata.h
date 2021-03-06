// Reminder: Modify typemap.dat to customize the header file generated by wsdl2h
/* getdata.h
   Generated by wsdl2h 2.8.30 from http://127.0.0.1:8000/?wsdl and typemap.dat
   2016-08-19 01:18:17 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/** @page page_notes Notes

@note HINTS:
 - Run soapcpp2 on getdata.h to generate the SOAP/XML processing logic.
   Use soapcpp2 -I to specify paths for #import
   To build with STL, 'stl.h' is imported from 'import' dir in package.
   Use soapcpp2 -j to generate improved proxy and server classes.
   Use soapcpp2 -r to generate a report.
 - Use wsdl2h -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Run Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h -R to generate REST operations.
 - Use wsdl2h -nname to use name as the base namespace prefix instead of 'ns'.
 - Use wsdl2h -Nname for service prefix and produce multiple service bindings
 - Use wsdl2h -d to enable DOM support for xsd:anyType.
 - Use wsdl2h -g to auto-generate readers and writers for root elements.
 - Use wsdl2h -b to auto-generate bi-directional operations (duplex ops).
 - Use wsdl2h -U to map XML names to C++ Unicode identifiers instead of _xNNNN.
 - Use wsdl2h -u to disable the generation of unions.
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

@warning
   DO NOT INCLUDE THIS ANNOTATED FILE DIRECTLY IN YOUR PROJECT SOURCE CODE.
   USE THE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT'S SOURCE CODE:
   THE soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

@copyright LICENSE:
@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The wsdl2h tool and its generated software are released under the GPL.
This software is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt c++,w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   SampleServices                                                           *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "SampleServices"

*/

#define SOAP_NAMESPACE_OF_ns1	"SampleServices"
//gsoap ns1   schema namespace:	SampleServices
//gsoap ns1   schema elementForm:	qualified
//gsoap ns1   schema attributeForm:	unqualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/


//  Forward declaration of class ns1__stringArray.
class ns1__stringArray;

//  Forward declaration of class ns1__getData.
class ns1__getData;

//  Forward declaration of class ns1__getDataResponse.
class ns1__getDataResponse;


/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   SampleServices                                                           *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   SampleServices                                                           *
 *                                                                            *
\******************************************************************************/

/// @brief "SampleServices":stringArray is a complexType.
///
/// class ns1__stringArray operations:
/// - ns1__stringArray* soap_new_ns1__stringArray(soap*) allocate
/// - ns1__stringArray* soap_new_ns1__stringArray(soap*, int num) allocate array
/// - ns1__stringArray* soap_new_req_ns1__stringArray(soap*, ...) allocate, set required members
/// - ns1__stringArray* soap_new_set_ns1__stringArray(soap*, ...) allocate, set all public members
/// - ns1__stringArray::soap_default(soap*) reset members to default
/// - int soap_read_ns1__stringArray(soap*, ns1__stringArray*) deserialize from a stream
/// - int soap_write_ns1__stringArray(soap*, ns1__stringArray*) serialize to a stream
/// - ns1__stringArray* ns1__stringArray::soap_dup(soap*) returns deep copy of ns1__stringArray, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - ns1__stringArray::soap_del() deep deletes ns1__stringArray data members, use only after ns1__stringArray::soap_dup(NULL) (use soapcpp2 -Ed)
class ns1__stringArray
{ public:
/// Size of array of char* is 0..unbounded.
   $int                                  __sizestring                   0;
/// Pointer to array char* of size 0..unbounded.
    char*                               *string                         0;
/// A handle to the soap struct context that manages this instance when instantiated by a context or NULL otherwise (automatically set).
    struct soap                         *soap                          ;
};

/// @brief "SampleServices":getData is a complexType.
///
/// class ns1__getData operations:
/// - ns1__getData* soap_new_ns1__getData(soap*) allocate
/// - ns1__getData* soap_new_ns1__getData(soap*, int num) allocate array
/// - ns1__getData* soap_new_req_ns1__getData(soap*, ...) allocate, set required members
/// - ns1__getData* soap_new_set_ns1__getData(soap*, ...) allocate, set all public members
/// - ns1__getData::soap_default(soap*) reset members to default
/// - int soap_read_ns1__getData(soap*, ns1__getData*) deserialize from a stream
/// - int soap_write_ns1__getData(soap*, ns1__getData*) serialize to a stream
/// - ns1__getData* ns1__getData::soap_dup(soap*) returns deep copy of ns1__getData, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - ns1__getData::soap_del() deep deletes ns1__getData data members, use only after ns1__getData::soap_dup(NULL) (use soapcpp2 -Ed)
class ns1__getData
{ public:
/// Element "sys_type" of XSD type xs:string.
    char*                                sys_USCOREtype                 0;	///< Optional element.
/// Element "identy" of XSD type xs:string.
    char*                                identy                         0;	///< Optional element.
/// Element "content" of XSD type xs:string.
    char*                                content                        0;	///< Optional element.
/// A handle to the soap struct context that manages this instance when instantiated by a context or NULL otherwise (automatically set).
    struct soap                         *soap                          ;
};

/// @brief "SampleServices":getDataResponse is a complexType.
///
/// class ns1__getDataResponse operations:
/// - ns1__getDataResponse* soap_new_ns1__getDataResponse(soap*) allocate
/// - ns1__getDataResponse* soap_new_ns1__getDataResponse(soap*, int num) allocate array
/// - ns1__getDataResponse* soap_new_req_ns1__getDataResponse(soap*, ...) allocate, set required members
/// - ns1__getDataResponse* soap_new_set_ns1__getDataResponse(soap*, ...) allocate, set all public members
/// - ns1__getDataResponse::soap_default(soap*) reset members to default
/// - int soap_read_ns1__getDataResponse(soap*, ns1__getDataResponse*) deserialize from a stream
/// - int soap_write_ns1__getDataResponse(soap*, ns1__getDataResponse*) serialize to a stream
/// - ns1__getDataResponse* ns1__getDataResponse::soap_dup(soap*) returns deep copy of ns1__getDataResponse, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - ns1__getDataResponse::soap_del() deep deletes ns1__getDataResponse data members, use only after ns1__getDataResponse::soap_dup(NULL) (use soapcpp2 -Ed)
class ns1__getDataResponse
{ public:
/// Element "getDataResult" of XSD type "SampleServices":stringArray.
    ns1__stringArray*                    getDataResult                  0;	///< Optional element.
/// A handle to the soap struct context that manages this instance when instantiated by a context or NULL otherwise (automatically set).
    struct soap                         *soap                          ;
};


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   SampleServices                                                           *
 *                                                                            *
\******************************************************************************/

/// @brief Top-level root element "SampleServices":stringArray of XSD type "SampleServices":stringArray.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// @brief Top-level root element "SampleServices":getData of XSD type "SampleServices":getData.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.

/// @brief Top-level root element "SampleServices":getDataResponse of XSD type "SampleServices":getDataResponse.
/// @note Use wsdl2h option -g to auto-generate a top-level root element declaration and processing code.


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   SampleServices                                                           *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns1  service name:	JqServiceHttpBinding 
//gsoap ns1  service type:	JqServiceHttpBinding 
//gsoap ns1  service port:	http://127.0.0.1:8000/ 
//gsoap ns1  service namespace:	SampleServices 
//gsoap ns1  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage JqServiceHttpBinding Definitions

@section JqServiceHttpBinding_bindings Service Bindings

  - @ref JqServiceHttpBinding

@section JqServiceHttpBinding_more More Information

  - @ref page_notes "Notes"

  - @ref page_XMLDataBinding "XML Data Binding"

  - @ref SOAP_ENV__Header "SOAP Header Content" (when applicable)

  - @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/**

@page JqServiceHttpBinding Binding "JqServiceHttpBinding"

@section JqServiceHttpBinding_operations Operations of Binding "JqServiceHttpBinding"

  - @ref __ns1__getData

@section JqServiceHttpBinding_ports Endpoints of Binding "JqServiceHttpBinding"

  - http://127.0.0.1:8000/

@note Use wsdl2h option -Nname to change the service binding prefix name


*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   JqServiceHttpBinding                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__getData                                                           *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__getData" of service binding "JqServiceHttpBinding".

  - SOAP document/literal style messaging

  - Action or location: "getData"

  - Addressing input action: "getData"

  - Addressing output action: "getDataResponse"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__getData(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    ns1__getData*                       ns1__getData_,
    // output parameters:
    ns1__getDataResponse               &ns1__getDataResponse_
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__getData(
    struct soap *soap,
    // input parameters:
    ns1__getData*                       ns1__getData_,
    // output parameters:
    ns1__getDataResponse               &ns1__getDataResponse_
  );
@endcode

C++ proxy class (defined in soapJqServiceHttpBindingProxy.h):
@code
  class JqServiceHttpBindingProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapJqServiceHttpBindingService.h):
@code
  class JqServiceHttpBindingService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	getData SOAP
//gsoap ns1  service method-style:	getData document
//gsoap ns1  service method-encoding:	getData literal
//gsoap ns1  service method-input-action:	getData getData
//gsoap ns1  service method-output-action:	getData getDataResponse
int __ns1__getData(
    ns1__getData*                       ns1__getData_,	///< Input parameter
    ns1__getDataResponse               &ns1__getDataResponse_	///< Output parameter
);

/**

@page JqServiceHttpBinding Binding "JqServiceHttpBinding"

@section JqServiceHttpBinding_policy_enablers Policy Enablers of Binding "JqServiceHttpBinding"

None specified.

*/

/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

Data can be read and deserialized from:
  - an int file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = (int)...
  - a C++ stream (istream, stringstream), using soap->is = (istream*)...
  - a C string, using soap->is = (const char*)...
  - any input, using the soap->frecv() callback

Data can be serialized and written to:
  - an int file descriptor, using soap->sendfd = (int)...
  - a socket, using soap->socket = (int)...
  - a C++ stream (ostream, stringstream), using soap->os = (ostream*)...
  - a C string, using soap->os = (const char**)...
  - any output, using the soap->fsend() callback

The following options are available for (de)serialization control:
  - soap->encodingStyle = NULL; to remove SOAP 1.1/1.2 encodingStyle
  - soap_mode(soap, SOAP_XML_TREE); XML without id-ref (no cycles!)
  - soap_mode(soap, SOAP_XML_GRAPH); XML with id-ref (including cycles)
  - soap_set_namespaces(soap, struct Namespace *nsmap); to set xmlns bindings


@section ns1 Top-level root elements of schema "SampleServices"

  - <ns1:stringArray> (use wsdl2h option -g to auto-generate type _ns1__stringArray)

  - <ns1:getData> (use wsdl2h option -g to auto-generate type _ns1__getData)

  - <ns1:getDataResponse> (use wsdl2h option -g to auto-generate type _ns1__getDataResponse)

*/

/* End of getdata.h */
