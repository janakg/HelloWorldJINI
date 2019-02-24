package com.helloworldjini;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactMethod;

import com.mycompany.helloworld.Dehaze;

class DehazeModule extends ReactContextBaseJavaModule {
    public DehazeModule(ReactApplicationContext reactContext) {
        super(reactContext);
    }

    @Override
    public String getName() {
        return "Dehaze";
    }

    @ReactMethod
    public void run(String uri, String media, Promise promise) {
        Dehaze dehazeInterface = Dehaze.create();
        try {
            String response = dehazeInterface.dehaze(uri, media);
            if (!response.isEmpty()) {
                promise.resolve(response);
            } else {
                throw new Exception("Error with Dehaze");
            }
        } catch (Exception e) {
            promise.reject(e);
        }
    }
}
