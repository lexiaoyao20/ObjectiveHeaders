/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebFormAccessoryDelegate.h"
#import "UIBrowserDocumentController.h"
#import "UIWebDocumentView.h"
#import "UIKit-Structs.h"

@class DOMNode, UIWebPDFView, NSMutableArray, NSObject, UIWebFormAccessory, UIWebTouchEventsGestureRecognizer, NSArray, UIWebFormDelegate, NSTimer, UIWebRotatingSheet;
@protocol UIFormPeripheral;

@interface UIWebBrowserView : UIWebDocumentView <UIWebFormAccessoryDelegate, UIBrowserDocumentController> {
	UIWebFormAccessory* _accessory;
	NSObject<UIFormPeripheral>* _input;
	DOMNode* _currentAssistedNode;
	CGRect _inputViewBounds;
	CGRect _addressViewBounds;
	float _lastAdjustmentForScroller;
	unsigned _accessoryEnabled : 1;
	unsigned _forceInputView : 1;
	unsigned _formIsAutoFilling : 1;
	unsigned _inputViewObeysDOMFocus : 1;
	unsigned _hasEditedTextField : 1;
	UIWebTouchEventsGestureRecognizer* _webTouchEventsGestureRecognizer;
	UIWebFormDelegate* _formDelegate;
	UIResponder* _editingDelegateForEverythingExceptForms;
	unsigned _dispatchedTouchEvents;
	NSMutableArray* _deferredTouchEvents;
	struct {
		NSMutableArray* all;
		NSMutableArray* html;
		NSMutableArray* javascript;
		NSMutableArray* css;
		NSMutableArray* error;
		NSMutableArray* warning;
		NSMutableArray* tip;
		NSMutableArray* log;
	} _messages;
	struct {
		UIWebPDFView* view;
		NSTimer* timer;
	} _pdf;
}
@property(retain, nonatomic) UIWebFormAccessory* _accessory;	// @synthesize
@property(retain, nonatomic) DOMNode* _currentAssistedNode;	// @synthesize
@property(assign, nonatomic) UIResponder* _editingDelegateForEverythingExceptForms;	// @synthesize
@property(retain, nonatomic) NSObject<UIFormPeripheral>* _input;	// @synthesize
@property(assign, nonatomic, getter=isAccessoryEnabled) BOOL accessoryEnabled;	// @synthesize=_accessoryEnabled
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;
@property(readonly, assign, nonatomic) BOOL hasEditedTextField;	// @synthesize=_hasEditedTextField
@property(assign, nonatomic) CGRect inputViewBounds;	// @synthesize=_inputViewBounds
@property(assign, nonatomic) BOOL inputViewObeysDOMFocus;	// @synthesize=_inputViewObeysDOMFocus
@property(readonly, assign, nonatomic) BOOL isDispatchingTouchEvents;
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;
+(id)_PDFPageNumberLabel:(BOOL)label;
+(id)getUIWebBrowserViewForWebFrame:(id)webFrame;
+(BOOL)isAutoFillAllowed;
+(float)preferredScrollDecelerationFactor;
-(id)initWithWebView:(id)webView frame:(CGRect)frame;
-(id)_absoluteUrlRelativeToDocumentURL:(id)documentURL;
// declared property getter: -(id)_accessory;
-(CGRect)_activeRectForRectToCenter:(CGRect)center;
-(void)_autoFillFrame:(id)frame;
-(id)_buildVersion;
-(void)_centerRect:(CGRect)rect forSizeChange:(BOOL)sizeChange withVisibleHeight:(float)visibleHeight pinningEdge:(int)edge;
-(void)_clearAllConsoleMessages;
-(void)_clearSelectionAndUI;
-(CGPoint)_convertWindowPointToViewport:(CGPoint)viewport;
// declared property getter: -(id)_currentAssistedNode;
-(CGSize)_defaultScrollViewContentSize;
-(void)_deferWebEvent:(id)event;
-(void)_dispatchWebEvent:(id)event;
-(void)_displayFormNodeInputView;
-(BOOL)_domainIsWhitelistedForUDIDHeader:(id)udidheader;
-(void)_dumpWebArchiveAtPath:(id)path;
-(id)_editingDelegate;
// declared property getter: -(id)_editingDelegateForEverythingExceptForms;
-(void)_endDeferringEvents;
-(unsigned)_firstVisiblePDFPageNumber;
-(void)_handleDeferredEvents;
-(void)_handleKeyEvent:(GSEventRef)event;
// declared property getter: -(id)_input;
-(void)_keyboardDidChangeFrame:(id)_keyboard;
-(id)_keyboardResponder;
-(void)_keyboardWillChangeFrame:(id)_keyboard;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)_keyboardWillShow:(id)_keyboard;
-(CGPoint)_originForPDFPageLabelInSuperview:(id)superview;
-(void)_promptForReplace:(id)replace;
-(id)_requestWithUDIDHeaderIfAppropriate:(id)udidheaderIfAppropriate;
-(BOOL)_requiresKeyboardResetOnReload;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(void)_resetFormDataForFrame:(id)frame;
-(void)_rotateEnclosingScrollView:(id)view toFrame:(CGRect)frame withVisibleHeight:(float)visibleHeight rotationDelegate:(id)delegate;
-(void)_scrollCaretToVisible:(id)visible;
-(void)_setAddressViewFrame:(CGRect)frame;
-(void)_setBrowserUserAgentProductVersion:(id)version bundleVersion:(id)version2;
-(void)_setInputViewBoundsForAutomaticKeyboardInfo:(id)automaticKeyboardInfo adjustScrollView:(BOOL)view;
-(void)_setSelectedDOMRangeAndUpdateUI:(id)ui;
-(void)_setUIWebViewUserAgent;
-(BOOL)_shouldDeferEvents;
-(void)_startAssistingKeyboard;
-(void)_startAssistingNode:(id)node;
-(void)_startDeferringEvents;
-(void)_startURLificationIfNeededCoalesce:(BOOL)coalesce;
-(void)_stopAssistingFormNode;
-(void)_stopAssistingKeyboard;
-(void)_stopAssistingNode:(id)node;
-(void)_updateAccessory;
-(void)_updateFixedPositionContent;
-(void)_updateFixedPositioningObjectsLayoutAfterScroll;
-(void)_updateFixedPositioningObjectsLayoutSoon;
-(void)_updatePDFPageNumberLabelWithUserScrolling:(BOOL)userScrolling animated:(BOOL)animated;
-(void)_updateScrollerViewForInputView:(id)inputView;
-(void)_webTouchEventsRecognized:(id)recognized;
-(void)_zoomToNode:(id)node forceScroll:(BOOL)scroll;
-(void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll;
-(void)_zoomToRect:(CGRect)rect ensuringVisibilityOfRect:(CGRect)rect2 withScale:(float)scale forceScroll:(BOOL)scroll formAssistantFrame:(CGRect)frame animationDuration:(double)duration;
-(void)_zoomToRect:(CGRect)rect withScale:(float)scale;
-(void)acceptedAutoFillWord:(id)word;
-(void)accessoryAutoFill;
-(void)accessoryClear;
-(void)accessoryDone;
-(void)accessoryTab:(BOOL)tab;
// declared property getter: -(BOOL)allowsInlineMediaPlayback;
-(void)assistFormNode:(id)node;
-(void)assistFormNodeForTyping:(id)typing;
-(void)autoFillWithElementValue;
-(BOOL)canAutoFill;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)clearMessagesMatchingMask:(int)mask;
-(void)copy:(id)copy;
-(void)dealloc;
-(void)formDelegateHandleTextChangeWithAutoFillSuggestions:(BOOL)autoFillSuggestions;
-(id)formElement;
// declared property getter: -(BOOL)hasEditedTextField;
-(id)inputAccessoryView;
-(id)inputView;
// declared property getter: -(CGRect)inputViewBounds;
// declared property getter: -(BOOL)inputViewObeysDOMFocus;
-(void)installGestureRecognizers;
// declared property getter: -(BOOL)isAccessoryEnabled;
-(BOOL)isAutoFillMode;
-(BOOL)isAutoFilling;
// declared property getter: -(BOOL)isDispatchingTouchEvents;
-(BOOL)isEditable;
// declared property getter: -(BOOL)mediaPlaybackRequiresUserAction;
-(id)messagesMatchingMask:(int)mask;
-(BOOL)playsNicelyWithGestures;
-(BOOL)resignFirstResponder;
// declared property setter: -(void)setAccessoryEnabled:(BOOL)enabled;
// declared property setter: -(void)setAllowsInlineMediaPlayback:(BOOL)playback;
-(void)setBounds:(CGRect)bounds;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setInputViewBounds:(CGRect)bounds;
// declared property setter: -(void)setInputViewObeysDOMFocus:(BOOL)focus;
// declared property setter: -(void)setMediaPlaybackRequiresUserAction:(BOOL)action;
// declared property setter: -(void)set_accessory:(id)accessory;
// declared property setter: -(void)set_currentAssistedNode:(id)node;
// declared property setter: -(void)set_editingDelegateForEverythingExceptForms:(id)everythingExceptForms;
// declared property setter: -(void)set_input:(id)input;
-(id)textDocument;
-(id)textFormElement;
-(void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;
-(void)webView:(id)view didFinishLoadForFrame:(id)frame;
-(void)webView:(id)view didFirstLayoutInFrame:(id)frame;
-(void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;
-(void)webView:(id)view didReceiveMessage:(id)message;
-(void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;
-(void)webView:(id)view elementDidBlurNode:(id)element;
-(void)webView:(id)view elementDidFocusNode:(id)element;
-(void)webView:(id)view willCloseFrame:(id)frame;
-(void)webViewDidPreventDefaultForEvent:(id)webView;
-(void)webViewFormEditedStatusHasChanged:(id)changed;
@end

