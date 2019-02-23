// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from helloworld.djinni

#pragma once

#include "dehaze.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeDehaze final : ::djinni::JniInterface<::helloworld::Dehaze, NativeDehaze> {
public:
    using CppType = std::shared_ptr<::helloworld::Dehaze>;
    using CppOptType = std::shared_ptr<::helloworld::Dehaze>;
    using JniType = jobject;

    using Boxed = NativeDehaze;

    ~NativeDehaze();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeDehaze>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeDehaze>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeDehaze();
    friend ::djinni::JniClass<NativeDehaze>;
    friend ::djinni::JniInterface<::helloworld::Dehaze, NativeDehaze>;

};

}  // namespace djinni_generated
