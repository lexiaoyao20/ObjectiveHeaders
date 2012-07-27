/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIWebView.h"
#import "UIScrollViewDelegate.h"
#import "UIView.h"

@class UIScrollView, NSURLRequest, UIWebViewInternal;
@protocol UIWebViewDelegate;

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate> {
@private
	UIWebViewInternal* _internal;
}
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;
@property(readonly, assign, nonatomic, getter=canGoBack) BOOL canGoBack;
@property(readonly, assign, nonatomic, getter=canGoForward) BOOL canGoForward;
@property(assign, nonatomic) unsigned dataDetectorTypes;
@property(assign, nonatomic) id<UIWebViewDelegate> delegate;
@property(assign, nonatomic) BOOL detectsPhoneNumbers;
@property(readonly, assign, nonatomic, getter=isLoading) BOOL loading;
@property(assign, nonatomic) BOOL mediaPlaybackAllowsAirPlay;
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property(readonly, assign, nonatomic) NSURLRequest* request;
@property(assign, nonatomic) BOOL scalesPageToFit;
@property(readonly, assign, nonatomic) UIScrollView* scrollView;
+(void)_updatePersistentStoragePaths;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)_appliesExclusiveTouchToSubviewTree;
-(void)_beginRotation;
-(id)_browserView;
-(void)_define:(id)define;
-(void)_didCompleteScrolling;
-(void)_didRotate:(id)rotate;
-(id)_documentView;
-(void)_finishRotation;
-(void)_frameOrBoundsChanged;
-(BOOL)_isDeallocating;
-(id)_pdfViewHandler;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)_reportError:(id)error;
-(void)_rescaleDocument;
-(id)_scrollView;
-(void)_setDrawInWebThread:(BOOL)webThread;
-(void)_setDrawsCheckeredPattern:(BOOL)pattern;
-(void)_setOverridesOrientationChangeEventHandling:(BOOL)handling;
-(void)_setRichTextReaderViewportSettings;
-(void)_setScalesPageToFitViewportSettings;
-(void)_setWebSelectionEnabled:(BOOL)enabled;
-(BOOL)_tryRetain;
-(void)_updateCheckeredPattern;
-(void)_updateOpaqueAndBackgroundColor;
-(void)_updateRequest;
-(void)_updateScrollerViewForInputView:(id)inputView;
-(void)_updateViewSettings;
-(void)_webViewCommonInit:(BOOL)init;
// declared property getter: -(BOOL)allowsInlineMediaPlayback;
// declared property getter: -(BOOL)canGoBack;
// declared property getter: -(BOOL)canGoForward;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)copy:(id)copy;
-(CGImageRef)createSnapshotWithRect:(CGRect)rect;
// declared property getter: -(unsigned)dataDetectorTypes;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)detectsPhoneNumbers;
-(void)encodeWithCoder:(id)coder;
-(void)goBack;
-(void)goForward;
// declared property getter: -(BOOL)isLoading;
-(void)loadData:(id)data MIMEType:(id)type textEncodingName:(id)name baseURL:(id)url;
-(void)loadHTMLString:(id)string baseURL:(id)url;
-(void)loadRequest:(id)request;
// declared property getter: -(BOOL)mediaPlaybackAllowsAirPlay;
// declared property getter: -(BOOL)mediaPlaybackRequiresUserAction;
-(void)modalView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(CGImageRef)newSnapshotWithRect:(CGRect)rect;
-(oneway void)release;
-(void)reload;
// declared property getter: -(id)request;
-(void)restoreStateFromHistoryItem:(id)historyItem forWebView:(id)webView;
-(id)retain;
-(unsigned)retainCount;
-(void)saveGeolocation:(id)geolocation;
-(void)saveStateToHistoryItem:(id)historyItem forWebView:(id)webView;
// declared property getter: -(BOOL)scalesPageToFit;
// declared property getter: -(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidEndZooming:(id)scrollView withView:(id)view atScale:(float)scale;
-(void)scrollViewDidScrollToTop:(id)scrollView;
-(void)scrollViewDidZoom:(id)scrollView;
-(void)scrollViewWasRemoved:(id)removed;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewWillBeginZooming:(id)scrollView withView:(id)view;
-(void)select:(id)select;
-(void)selectAll:(id)all;
// declared property setter: -(void)setAllowsInlineMediaPlayback:(BOOL)playback;
-(void)setBackgroundColor:(id)color;
-(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setDataDetectorTypes:(unsigned)types;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDetectsPhoneNumbers:(BOOL)numbers;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setMediaPlaybackAllowsAirPlay:(BOOL)play;
// declared property setter: -(void)setMediaPlaybackRequiresUserAction:(BOOL)action;
-(void)setOpaque:(BOOL)opaque;
// declared property setter: -(void)setScalesPageToFit:(BOOL)fit;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)stopLoading;
-(id)stringByEvaluatingJavaScriptFromString:(id)string;
-(void)view:(id)view didSetFrame:(CGRect)frame oldFrame:(CGRect)frame3;
-(id)viewForZoomingInScrollView:(id)scrollView;
-(id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;
-(void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;
-(void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;
-(void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;
-(void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;
-(void)webView:(id)view didCommitLoadForFrame:(id)frame;
-(void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;
-(void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;
-(void)webView:(id)view didFinishLoadForFrame:(id)frame;
-(void)webView:(id)view didFirstLayoutInFrame:(id)frame;
-(void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;
-(void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;
-(void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;
-(void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;
-(void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;
-(id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;
-(void)webView:(id)view printFrameView:(id)view2;
-(BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;
-(void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;
-(void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;
-(void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;
-(void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;
-(id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;
-(void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;
-(BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;
-(id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;
-(void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;
-(void)webViewClose:(id)close;
-(void)webViewMainFrameDidCommitLoad:(id)webViewMainFrame;
-(void)webViewMainFrameDidFinishLoad:(id)webViewMainFrame;
-(void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)webViewMainFrame;
@end

@interface UIWebView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

@interface UIWebView (UIWebViewPrintFormatter)
-(Class)_printFormatterClass;
@end
