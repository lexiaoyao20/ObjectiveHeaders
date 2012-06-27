/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSWeakCallback.h"

@class NSPointerArray, NSObject, NSKeyValueProperty;

__attribute__((visibility("hidden")))
@interface NSKeyValueObservance : NSWeakCallback {
@private
	int _retainCountMinusOne;
	NSObject* _observer;
	NSKeyValueProperty* _property;
	unsigned _options;
	void* _context;
	NSObject* _originalObservable;
	unsigned _cachedUnrotatedHashComponent;
	BOOL _cachedIsShareable;
	NSPointerArray* _observationInfos;
}
-(id)_initWithObserver:(id)observer property:(id)property options:(unsigned)options context:(void*)context originalObservable:(id)observable;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(void)dealloc;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(oneway void)release;
-(id)retain;
-(unsigned)retainCount;
@end
