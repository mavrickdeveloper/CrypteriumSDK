// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef CRPTTRANSACTIONS_SWIFT_H
#define CRPTTRANSACTIONS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CRPTComponents;
@import CoreGraphics;
@import Foundation;
@import QuartzCore;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="CRPTTransactions",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;

SWIFT_CLASS("_TtC16CRPTTransactions19AmountAccessoryView")
@interface AmountAccessoryView : UIInputView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame inputViewStyle:(UIInputViewStyle)inputViewStyle SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16CRPTTransactions17AmountDoubleField")
@interface AmountDoubleField : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UITextField;
@class UIEvent;

SWIFT_CLASS("_TtC16CRPTTransactions11AmountField")
@interface AmountField : UIView <UITextFieldDelegate>
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16CRPTTransactions10AmountView")
@interface AmountView : XibUIView <UITextFieldDelegate>
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)layoutSubviews;
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
- (BOOL)textFieldShouldBeginEditing:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (BOOL)textFieldShouldEndEditing:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions15AttributedLabel")
@interface AttributedLabel : UILabel
@property (nonatomic) IBInspectable CGFloat letterSpacing;
@property (nonatomic) IBInspectable CGFloat lineHeight;
@property (nonatomic, copy) NSString * _Nullable text;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC16CRPTTransactions15CRPTAmountField")
@interface CRPTAmountField : UIView <UITextFieldDelegate>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (BOOL)textField:(UITextField * _Nonnull)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
- (BOOL)textFieldShouldBeginEditing:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (BOOL)textFieldShouldEndEditing:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16CRPTTransactions21CRPTDoubleAmountField")
@interface CRPTDoubleAmountField : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIColor;
@class CAAnimation;

SWIFT_CLASS("_TtC16CRPTTransactions18CircleProgressView")
@interface CircleProgressView : UIView <CAAnimationDelegate>
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull progressColor;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull circleBackColor;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)animationDidStop:(CAAnimation * _Nonnull)anim finished:(BOOL)flag;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16CRPTTransactions11ContactView")
@interface ContactView : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions16CryptoFromToView")
@interface CryptoFromToView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableViewCell;

SWIFT_CLASS("_TtC16CRPTTransactions20CurrencySelectorView")
@interface CurrencySelectorView : UITableView <UITableViewDataSource>
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC16CRPTTransactions14DualAmountView")
@interface DualAmountView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16CRPTTransactions19EnterCardNumberView")
@interface EnterCardNumberView : XibUIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;

SWIFT_CLASS("_TtC16CRPTTransactions26ExchangeCurrencySelectorVC")
@interface ExchangeCurrencySelectorVC : UIViewController <UITableViewDataSource>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16CRPTTransactions12FeeLevelView")
@interface FeeLevelView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions15FeeListViewCell")
@interface FeeListViewCell : UITableViewCell
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions5FeeVC")
@interface FeeVC : UIViewController
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions23HistoryDetailHeaderView")
@interface HistoryDetailHeaderView : UIView
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions24HistoryDetailInfoRowView")
@interface HistoryDetailInfoRowView : UIView
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions21HistoryDetailInfoView")
@interface HistoryDetailInfoView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions20HistoryEmptyListView")
@interface HistoryEmptyListView : UIView
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions18HistoryListRowView")
@interface HistoryListRowView : UIView
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions28HistoryListSectionHeaderView")
@interface HistoryListSectionHeaderView : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UIScrollView;

SWIFT_CLASS("_TtC16CRPTTransactions15HistoryListView")
@interface HistoryListView : UITableView <UITableViewDataSource, UITableViewDelegate>
- (nonnull instancetype)initWithFrame:(CGRect)frame style:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
@end


SWIFT_CLASS("_TtC16CRPTTransactions25HistorySuccessContentView")
@interface HistorySuccessContentView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions19InformationsFeeView")
@interface InformationsFeeView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions20InformationsRateView")
@interface InformationsRateView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions15PhoneAccessCell")
@interface PhoneAccessCell : UITableViewCell
- (void)awakeFromNib;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions17PhoneNotFoundCell")
@interface PhoneNotFoundCell : UITableViewCell
- (void)awakeFromNib;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions17PhoneSelectorCell")
@interface PhoneSelectorCell : UITableViewCell
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions22PhoneSelectorTableView")
@interface PhoneSelectorTableView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface PhoneSelectorTableView (SWIFT_EXTENSION(CRPTTransactions)) <UITextFieldDelegate>
- (BOOL)textFieldShouldBeginEditing:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
@end


@interface PhoneSelectorTableView (SWIFT_EXTENSION(CRPTTransactions)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC16CRPTTransactions15PhoneSelectorVC")
@interface PhoneSelectorVC : UIViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



@interface PhoneSelectorVC (SWIFT_EXTENSION(CRPTTransactions)) <UITableViewDataSource>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC16CRPTTransactions8RateView")
@interface RateView : UIView
- (id _Nullable)awakeAfterUsingCoder:(NSCoder * _Nonnull)coder SWIFT_WARN_UNUSED_RESULT;
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions22ReceiveV2NewWalletView")
@interface ReceiveV2NewWalletView : UIView
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions15ReceiveV2QRView")
@interface ReceiveV2QRView : UIView
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions11ReceiveVCV2")
@interface ReceiveVCV2 : UIViewController <UIScrollViewDelegate>
- (void)viewDidLoad;
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions12SkeletonView")
@interface SkeletonView : UIView
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions22TransactionContactView")
@interface TransactionContactView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions24TransactionsSelectorView")
@interface TransactionsSelectorView : UIView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC16CRPTTransactions18TransferBottomView")
@interface TransferBottomView : XibUIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
@end












@class UITouch;

SWIFT_CLASS("_TtC16CRPTTransactions18ViewControllerBase")
@interface ViewControllerBase : UIViewController
- (void)viewDidLoad;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UINavigationBar;

SWIFT_CLASS("_TtC16CRPTTransactions20ViewControllerBaseV2")
@interface ViewControllerBaseV2 : UIViewController
@property (nonatomic, weak) IBOutlet UINavigationBar * _Nullable navigationBar;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)animated;
@property (nonatomic, copy) NSString * _Nullable title;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions20WalletInputTableView")
@interface WalletInputTableView : UIView
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface WalletInputTableView (SWIFT_EXTENSION(CRPTTransactions)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC16CRPTTransactions15WalletInputView")
@interface WalletInputView : XibUIView <UITextFieldDelegate>
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField SWIFT_WARN_UNUSED_RESULT;
- (BOOL)resignFirstResponder SWIFT_WARN_UNUSED_RESULT;
- (BOOL)becomeFirstResponder SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC16CRPTTransactions16WrongAddressCell")
@interface WrongAddressCell : UITableViewCell
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif