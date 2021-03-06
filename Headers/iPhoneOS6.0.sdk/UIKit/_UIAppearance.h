/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSArray, NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIAppearance : XXUnknownSuperclass {
@private
	Class _CustomizableClass;
	NSArray* _containerList;
	NSMutableArray* _appearanceInvocations;
	NSMapTable* _invocationSources;
	NSMutableDictionary* _resettableInvocations;
}
@property(readonly, assign, nonatomic) Class _CustomizableClass;	// @synthesize
@property(retain, nonatomic, setter=_setResettableInvocations:) NSMutableDictionary* _resettableInvocations;	// @synthesize
+(void)_addWindow:(id)window forSource:(id)source;
+(id)_appearanceForClass:(Class)aClass withContainerList:(id)containerList;
+(void)_applyInvocationsTo:(id)to window:(id)window;
+(void)_applyInvocationsTo:(id)to window:(id)window matchingSelector:(SEL)selector;
+(id)_currentAppearanceSource;
+(BOOL)_hasCustomizationsForClass:(Class)aClass;
+(id)_pendingRecordInvocationsForSource:(id)source;
+(id)_recorderForSource:(id)source;
+(id)_recordersExcludingSource:(id)source withWindow:(id)window;
+(void)_removeWindow:(id)window forSource:(id)source;
+(id)_rootAppearancesNode;
+(void)_setCurrentAppearanceSource:(id)source;
+(void)_setInvalidatesViewsOnAppearanceChange:(BOOL)change;
+(id)_windowsForSource:(id)source;
// declared property getter: -(Class)_CustomizableClass;
-(id)_appearanceInvocations;
// declared property getter: -(id)_resettableInvocations;
-(id)_resettableInvocationsCreateIfNecessary;
// declared property setter: -(void)_setResettableInvocations:(id)invocations;
-(void)dealloc;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)updateResettableSelectorsWithInvocation:(id)invocation removeSelector:(BOOL)selector;
@end

