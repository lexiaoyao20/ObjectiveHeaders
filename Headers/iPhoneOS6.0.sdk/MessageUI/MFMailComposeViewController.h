/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol MFMailComposeViewControllerDelegate;

@interface MFMailComposeViewController : XXUnknownSuperclass {
@private
	id _internal;
}
@property(assign, nonatomic) id<MFMailComposeViewControllerDelegate> mailComposeDelegate;
+(BOOL)canSendMail;
+(BOOL)hasAutosavedMessageWithIdentifier:(id)identifier;
+(unsigned)maximumAttachmentSize;
+(void)removeAutosavedMessageWithIdentifier:(id)identifier;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithURL:(id)url;
-(id)_addAttachmentData:(id)data mimeType:(id)type fileName:(id)name;
-(id)_internalViewController;
-(id)_validEmailAddressesFromArray:(id)array;
-(void)addAttachmentData:(id)data mimeType:(id)type fileName:(id)name;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)autosaveWithHandler:(id)handler;
-(void)dealloc;
-(CGRect)frameForAttachmentWithIdentifier:(id)identifier;
// declared property getter: -(id)mailComposeDelegate;
-(void)recoverAutosavedMessageWithIdentifier:(id)identifier;
-(void)requestFramesForAttachmentsWithIdentifiers:(id)identifiers resultHandler:(id)handler;
-(void)setAutorotationDelegate:(id)delegate;
-(void)setBccRecipients:(id)recipients;
-(void)setCcRecipients:(id)recipients;
-(void)setContentVisible:(BOOL)visible;
-(void)setKeyboardVisible:(BOOL)visible;
// declared property setter: -(void)setMailComposeDelegate:(id)delegate;
-(void)setMessageBody:(id)body isHTML:(BOOL)html;
-(void)setSubject:(id)subject;
-(void)setToRecipients:(id)recipients;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
@end
