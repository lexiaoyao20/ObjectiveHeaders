/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>

@class NSURLQueueNode;

__attribute__((visibility("hidden")))
@interface NSURLQueue : NSObject {
@private
	unsigned count;
	NSURLQueueNode* head;
	NSURLQueueNode* tail;
	id monitor;
	BOOL waitOnTake;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;
}
+(id)newNode;
-(id)init;
-(void)clear;
-(unsigned)count;
-(void)dealloc;
-(void)finalize;
-(int)indexOf:(id)of;
-(BOOL)isEmpty;
-(id)peek;
-(id)peekAt:(unsigned)at;
-(void)put:(id)put;
-(BOOL)remove:(id)remove;
-(void)setWaitOnTake:(BOOL)take;
-(id)take;
-(BOOL)waitOnTake;
@end
