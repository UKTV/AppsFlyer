/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2018 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

namespace co {
namespace uk {
namespace devpulse {
namespace appsflyer {

class AppsFlyerModule : public titanium::Proxy
{
public:
	explicit AppsFlyerModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void trackEvent(const v8::FunctionCallbackInfo<v8::Value>&);
	static void initialise(const v8::FunctionCallbackInfo<v8::Value>&);
	static void example(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------
	static void getter_exampleProp(v8::Local<v8::Name> name, const v8::PropertyCallbackInfo<v8::Value>& info);
	static void setter_exampleProp(v8::Local<v8::Name> name, v8::Local<v8::Value> value, const v8::PropertyCallbackInfo<void>& info);

};

} // appsflyer
} // devpulse
} // uk
} // co
