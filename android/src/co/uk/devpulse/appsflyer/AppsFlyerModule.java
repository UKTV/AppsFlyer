/**
 * This file was auto-generated by the Titanium Module SDK helper for Android
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 *
 * SDK link: https://support.appsflyer.com/hc/en-us/articles/207032126-AppsFlyer-SDK-Integration-Android
 * Timodule.xml: https://wiki.appcelerator.org/display/guides2/tiapp.xml+and+timodule.xml+Reference#tiapp.xmlandtimodule.xmlReference-Android-specificsection
 */
package co.uk.devpulse.appsflyer;

import org.appcelerator.kroll.KrollModule;
import org.appcelerator.kroll.annotations.Kroll;

import org.appcelerator.titanium.TiApplication;
import org.appcelerator.kroll.common.Log;
import org.appcelerator.kroll.common.TiConfig;

import com.appsflyer.*;
import org.appcelerator.kroll.KrollDict;
import android.app.Activity;
import org.appcelerator.kroll.*;
import org.appcelerator.titanium.util.TiConvert;
import java.util.Map;
import java.util.HashMap;

@Kroll.module(name="AppsFlyer", id="co.uk.devpulse.appsflyer")
public class AppsFlyerModule extends KrollModule
{

	// Standard Debugging variables
	private static final String LCAT = "AppsFlyerModule";
	private static final boolean DBG = TiConfig.LOGD;

	// You can define constants with @Kroll.constant, for example:
	// @Kroll.constant public static final String EXTERNAL_NAME = value;

	public AppsFlyerModule()
	{
		super();
	}

	@Kroll.onAppCreate
	public static void onAppCreate(TiApplication app)
	{
		Log.d(LCAT, "inside onAppCreate");
		// put module init code that needs to run when the application is created
	}

	// Methods
	@Kroll.method
	public String example()
	{
		Log.d(LCAT, "example called");
		return "hello world";
	}

	// Properties
	@Kroll.getProperty
	public String getExampleProp()
	{
		Log.d(LCAT, "get example property");
		return "hello world";
	}


	@Kroll.setProperty
	public void setExampleProp(String value) {
		Log.d(LCAT, "set example property: " + value);
	}


	private HashMap<String, Object> toHashMap(Object data) {
        if (data != null) {
            return (HashMap<String, Object>)data;
        }

        return null;
    }


	@Kroll.method
	public void initialise(KrollDict args) {
		Log.d(LCAT, "Initialising tracker.");

		TiApplication appContext = TiApplication.getInstance();
		//Activity activity = appContext.getCurrentActivity();

		Boolean isDebug = TiConvert.toBoolean(args.get("isDebug"));
		String devKey = TiConvert.toString(args.get("appsFlyerDevKey"));

		AppsFlyerLib.getInstance().start(appContext, devKey);

		// https://github.com/AppsFlyerSDK/AndroidSampleApp/blob/master/app/src/main/java/android/appsflyer/sampleapp/MainActivity.java
		// have to implement these, even if you dont add any logic to them
		// https://support.appsflyer.com/hc/en-us/articles/209676073-Implementing-Deferred-Deeplinking-with-OneLink
		AppsFlyerLib.getInstance().registerConversionListener(appContext, new AppsFlyerConversionListener() {

											@Override
											public void onConversionDataSuccess(Map<String, Object> conversionData) {

															for (String attrName : conversionData.keySet()) {
															Log.d("AppsFlyerConversionListener - onConversionDataSuccess", "attribute: " + attrName + " = " + conversionData.get(attrName));
													}
											}

											@Override
											public void onConversionDataFail(String errorMessage) {
								 							Log.d("AppsFlyerConversionListener - onConversionDataFail", "error getting conversion data: " + errorMessage);
											}

											@Override
											public void onAppOpenAttribution(Map<String, String> conversionData) {

													for (String attrName : conversionData.keySet()) {
															Log.d("AppsFlyerConversionListener - onAppOpenAttribution", "attribute: " + attrName + " = " + conversionData.get(attrName));
													}

											}

											@Override
											public void onAttributionFailure(String errorMessage) {
													Log.d("AppsFlyerConversionListener - onAttributionFailure", "error onAttributionFailure : " + errorMessage);
											}
        });
	}

	@Kroll.method
	public void trackEvent(KrollDict args) {
		Log.d(LCAT, "Tracking Event.");

		TiApplication appContext = TiApplication.getInstance();

		String name = TiConvert.toString(args.get("name"));
		HashMap<String, Object> data = toHashMap(args.get("data"));

		AppsFlyerLib.getInstance().logEvent(appContext, name, data);
	}

}
