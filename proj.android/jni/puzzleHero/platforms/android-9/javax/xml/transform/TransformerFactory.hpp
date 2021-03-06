/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.transform.TransformerFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Transformer; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class URIResolver; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Source; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class ErrorListener; } } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Templates; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/ClassLoader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/transform/ErrorListener.hpp>
#include <javax/xml/transform/Source.hpp>
#include <javax/xml/transform/Templates.hpp>
#include <javax/xml/transform/Transformer.hpp>
#include <javax/xml/transform/URIResolver.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform {

	class TransformerFactory;
	class TransformerFactory
		: public object<TransformerFactory>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)

		explicit TransformerFactory(jobject jobj)
		: object<TransformerFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< javax::xml::transform::TransformerFactory > newInstance();
		static local_ref< javax::xml::transform::TransformerFactory > newInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::ClassLoader >  const&);
		local_ref< javax::xml::transform::Transformer > newTransformer(local_ref< javax::xml::transform::Source >  const&);
		local_ref< javax::xml::transform::Transformer > newTransformer();
		local_ref< javax::xml::transform::Templates > newTemplates(local_ref< javax::xml::transform::Source >  const&);
		local_ref< javax::xml::transform::Source > getAssociatedStylesheet(local_ref< javax::xml::transform::Source >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void setURIResolver(local_ref< javax::xml::transform::URIResolver >  const&);
		local_ref< javax::xml::transform::URIResolver > getURIResolver();
		void setFeature(local_ref< java::lang::String >  const&, jboolean);
		jboolean getFeature(local_ref< java::lang::String >  const&);
		void setAttribute(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > getAttribute(local_ref< java::lang::String >  const&);
		void setErrorListener(local_ref< javax::xml::transform::ErrorListener >  const&);
		local_ref< javax::xml::transform::ErrorListener > getErrorListener();
	}; //class TransformerFactory

} //namespace transform
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_IMPL

namespace j2cpp {



javax::xml::transform::TransformerFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< javax::xml::transform::TransformerFactory > javax::xml::transform::TransformerFactory::newInstance()
{
	return call_static_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(1),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::xml::transform::TransformerFactory >
	>();
}

local_ref< javax::xml::transform::TransformerFactory > javax::xml::transform::TransformerFactory::newInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::ClassLoader > const &a1)
{
	return call_static_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(2),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< javax::xml::transform::TransformerFactory >
	>(a0, a1);
}

local_ref< javax::xml::transform::Transformer > javax::xml::transform::TransformerFactory::newTransformer(local_ref< javax::xml::transform::Source > const &a0)
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(3),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< javax::xml::transform::Transformer >
	>(get_jobject(), a0);
}

local_ref< javax::xml::transform::Transformer > javax::xml::transform::TransformerFactory::newTransformer()
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(4),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< javax::xml::transform::Transformer >
	>(get_jobject());
}

local_ref< javax::xml::transform::Templates > javax::xml::transform::TransformerFactory::newTemplates(local_ref< javax::xml::transform::Source > const &a0)
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(5),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< javax::xml::transform::Templates >
	>(get_jobject(), a0);
}

local_ref< javax::xml::transform::Source > javax::xml::transform::TransformerFactory::getAssociatedStylesheet(local_ref< javax::xml::transform::Source > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(6),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< javax::xml::transform::Source >
	>(get_jobject(), a0, a1, a2, a3);
}

void javax::xml::transform::TransformerFactory::setURIResolver(local_ref< javax::xml::transform::URIResolver > const &a0)
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(7),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

local_ref< javax::xml::transform::URIResolver > javax::xml::transform::TransformerFactory::getURIResolver()
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(8),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< javax::xml::transform::URIResolver >
	>(get_jobject());
}

void javax::xml::transform::TransformerFactory::setFeature(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(9),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

jboolean javax::xml::transform::TransformerFactory::getFeature(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(10),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(10), 
		jboolean
	>(get_jobject(), a0);
}

void javax::xml::transform::TransformerFactory::setAttribute(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(11),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > javax::xml::transform::TransformerFactory::getAttribute(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(12),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

void javax::xml::transform::TransformerFactory::setErrorListener(local_ref< javax::xml::transform::ErrorListener > const &a0)
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(13),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

local_ref< javax::xml::transform::ErrorListener > javax::xml::transform::TransformerFactory::getErrorListener()
{
	return call_method<
		javax::xml::transform::TransformerFactory::J2CPP_CLASS_NAME,
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_NAME(14),
		javax::xml::transform::TransformerFactory::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< javax::xml::transform::ErrorListener >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(javax::xml::transform::TransformerFactory,"javax/xml/transform/TransformerFactory")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,1,"newInstance","()Ljavax/xml/transform/TransformerFactory;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,2,"newInstance","(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljavax/xml/transform/TransformerFactory;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,3,"newTransformer","(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Transformer;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,4,"newTransformer","()Ljavax/xml/transform/Transformer;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,5,"newTemplates","(Ljavax/xml/transform/Source;)Ljavax/xml/transform/Templates;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,6,"getAssociatedStylesheet","(Ljavax/xml/transform/Source;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,7,"setURIResolver","(Ljavax/xml/transform/URIResolver;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,8,"getURIResolver","()Ljavax/xml/transform/URIResolver;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,9,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,10,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,11,"setAttribute","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,12,"getAttribute","(Ljava/lang/String;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,13,"setErrorListener","(Ljavax/xml/transform/ErrorListener;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::TransformerFactory,14,"getErrorListener","()Ljavax/xml/transform/ErrorListener;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_TRANSFORMERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
