// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gomatcha.io/matcha/pb/view/android/stackview.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class MatchaAndroidPBStackChildView;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - MatchaAndroidPBStackviewRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface MatchaAndroidPBStackviewRoot : GPBRootObject
@end

#pragma mark - MatchaAndroidPBStackChildView

typedef GPB_ENUM(MatchaAndroidPBStackChildView_FieldNumber) {
  MatchaAndroidPBStackChildView_FieldNumber_ScreenId = 3,
};

@interface MatchaAndroidPBStackChildView : GPBMessage

@property(nonatomic, readwrite) int64_t screenId;

@end

#pragma mark - MatchaAndroidPBStackView

typedef GPB_ENUM(MatchaAndroidPBStackView_FieldNumber) {
  MatchaAndroidPBStackView_FieldNumber_ChildrenArray = 1,
};

@interface MatchaAndroidPBStackView : GPBMessage

/**
 * matcha.text.TextStyle titleTextStyle = 2;
 * matcha.text.TextStyle backTextStyle = 3;
 * matcha.Color barColor = 4;
 **/
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<MatchaAndroidPBStackChildView*> *childrenArray;
/** The number of items in @c childrenArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger childrenArray_Count;

@end

#pragma mark - MatchaAndroidPBStackBar

typedef GPB_ENUM(MatchaAndroidPBStackBar_FieldNumber) {
  MatchaAndroidPBStackBar_FieldNumber_Title = 1,
};

@interface MatchaAndroidPBStackBar : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *title;

@end

#pragma mark - MatchaAndroidPBStackEvent

typedef GPB_ENUM(MatchaAndroidPBStackEvent_FieldNumber) {
  MatchaAndroidPBStackEvent_FieldNumber_IdArray = 1,
};

@interface MatchaAndroidPBStackEvent : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) GPBInt64Array *idArray;
/** The number of items in @c idArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger idArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
