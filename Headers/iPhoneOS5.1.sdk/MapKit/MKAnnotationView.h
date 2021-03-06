/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, MKAnnotationViewInternal, UIImage, UIView;
@protocol MKAnnotation;

@interface MKAnnotationView : XXUnknownSuperclass {
	MKAnnotationViewInternal* _internal;
	BOOL _customTransformApplied;
	BOOL _internalTransformApplied;
}
@property(assign, nonatomic) CGAffineTransform _mapTransform;
@property(retain, nonatomic) id<MKAnnotation> annotation;
@property(assign, nonatomic) CGPoint calloutOffset;
@property(assign, nonatomic) BOOL canShowCallout;
@property(assign, nonatomic) CGPoint centerOffset;
@property(assign, nonatomic) unsigned dragState;
@property(assign, nonatomic, getter=isDraggable) BOOL draggable;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;
@property(retain, nonatomic) UIImage* image;
@property(retain, nonatomic) UIView* leftCalloutAccessoryView;
@property(readonly, assign, nonatomic) NSString* reuseIdentifier;
@property(retain, nonatomic) UIView* rightCalloutAccessoryView;
@property(assign, nonatomic, getter=isSelected) BOOL selected;
+(id)_disclosureCalloutButton;
+(unsigned)_selectedZIndex;
+(unsigned)_zIndex;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(id)currentLocationTitle;
+(id)droppedPinTitle;
-(id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
-(id)initWithFrame:(CGRect)frame;
-(id)_annotationContainer;
-(id)_calloutView;
-(BOOL)_canChangeOrientation;
-(BOOL)_canDisplayDisclosureInCallout;
-(BOOL)_canDisplayPlacemarkInCallout;
-(BOOL)_canDisplayStreetViewInCallout;
-(id)_contentLayer;
-(void)_enableRotationForHeadingMode:(float)headingMode;
-(BOOL)_hasAlternateOrientation;
// declared property getter: -(CGAffineTransform)_mapTransform;
-(unsigned)_mapType;
-(unsigned)_orientationCount;
-(void)_resetZIndex;
-(void)_resetZIndexNotify:(BOOL)notify;
-(void)_setCalloutView:(id)view;
-(void)_setCanDisplayDisclosureInCallout:(BOOL)callout;
-(void)_setCanDisplayPlacemarkInCallout:(BOOL)callout;
-(void)_setCanDisplayStreetViewInCallout:(BOOL)callout;
-(void)_setMapType:(unsigned)type;
-(void)_setRotationRadians:(float)radians withAnimation:(id)animation;
-(void)_setZIndex:(unsigned)index;
-(void)_setZIndex:(unsigned)index notify:(BOOL)notify;
-(CGRect)_significantBounds;
-(CGRect)_significantFrame;
-(void)_updateZIndex;
-(void)_userTrackingModeDidChange:(id)_userTrackingMode;
-(unsigned)_zIndex;
// declared property getter: -(id)annotation;
// declared property getter: -(CGPoint)calloutOffset;
// declared property getter: -(BOOL)canShowCallout;
// declared property getter: -(CGPoint)centerOffset;
-(CADoublePoint)coordinate;
-(void)dealloc;
// declared property getter: -(unsigned)dragState;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
// declared property getter: -(id)image;
// declared property getter: -(BOOL)isDraggable;
// declared property getter: -(BOOL)isEnabled;
// declared property getter: -(BOOL)isHighlighted;
// declared property getter: -(BOOL)isSelected;
-(void)layoutSubviews;
// declared property getter: -(id)leftCalloutAccessoryView;
-(void)prepareForReuse;
// declared property getter: -(id)reuseIdentifier;
// declared property getter: -(id)rightCalloutAccessoryView;
// declared property setter: -(void)setAnnotation:(id)annotation;
// declared property setter: -(void)setCalloutOffset:(CGPoint)offset;
// declared property setter: -(void)setCanShowCallout:(BOOL)callout;
// declared property setter: -(void)setCenterOffset:(CGPoint)offset;
// declared property setter: -(void)setDragState:(unsigned)state;
-(void)setDragState:(unsigned)state animated:(BOOL)animated;
// declared property setter: -(void)setDraggable:(BOOL)draggable;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
// declared property setter: -(void)setHighlighted:(BOOL)highlighted;
// declared property setter: -(void)setImage:(id)image;
// declared property setter: -(void)setLeftCalloutAccessoryView:(id)view;
// declared property setter: -(void)setRightCalloutAccessoryView:(id)view;
// declared property setter: -(void)setSelected:(BOOL)selected;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
// declared property setter: -(void)set_mapTransform:(CGAffineTransform)transform;
@end

