/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MKRoute, MKRouteStep, MKRouteGroup, NSMutableSet, MKRouteLoader, NSMutableDictionary, MKShinyRouteOverlayView, UIImageView;
@protocol MKOverlay, MKRouteManagerDelegate;

@interface MKRouteManager : XXUnknownSuperclass {
	int _searchMode;
	id<MKRouteManagerDelegate> _delegate;
	MKRouteLoader* _routeLoader;
	UIImageView* _routePositionView;
	id<MKOverlay> _routeViewBModel;
	MKShinyRouteOverlayView* _routeViewB;
	NSMutableSet* _stepsToInvalidate;
	NSMutableDictionary* _transitAnnotationViews;
	BOOL _isShowingTransitAnnotationViews;
	NSMutableDictionary* _alternateRouteAnnotationViews;
	BOOL _isShowingAlternateRouteAnnotationViews;
	BOOL _isDroppingRoutePins;
	CADoublePoint _routePositionViewCoordinate;
	BOOL _tapRouteToSelectEnabled;
	BOOL _routesWereDistinguishable;
	BOOL _isAnimating;
	float _futureScale;
	CADoublePoint _futureCenterPoint;
	double _futureDuration;
}
@property(retain, nonatomic) NSMutableDictionary* alternateRouteAnnotationViews;	// @synthesize=_alternateRouteAnnotationViews
@property(assign, nonatomic) id<MKRouteManagerDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) MKRouteGroup* displayedRouteGroup;
@property(assign, nonatomic) BOOL isDroppingRoutePins;	// @synthesize=_isDroppingRoutePins
@property(assign, nonatomic) BOOL isShowingAlternateRouteAnnotationViews;	// @synthesize=_isShowingAlternateRouteAnnotationViews
@property(assign, nonatomic) BOOL isShowingTransitAnnotationViews;	// @synthesize=_isShowingTransitAnnotationViews
@property(assign, nonatomic) BOOL needToShowRoute;
@property(readonly, assign, nonatomic) BOOL pansAndZoomsToRouteOverview;
@property(readonly, assign, nonatomic) MKRouteStep* previousStep;
@property(readonly, assign, nonatomic) unsigned previousStepIndex;
@property(readonly, assign, nonatomic) MKRouteGroup* routeGroup;
@property(retain, nonatomic) MKRouteLoader* routeLoader;	// @synthesize=_routeLoader
@property(retain, nonatomic) UIImageView* routePositionView;	// @synthesize=_routePositionView
@property(assign, nonatomic) CADoublePoint routePositionViewCoordinate;	// @synthesize=_routePositionViewCoordinate
@property(readonly, assign, nonatomic) BOOL routeStartStepIsActive;
@property(retain, nonatomic) MKShinyRouteOverlayView* routeView;
@property(retain, nonatomic) MKShinyRouteOverlayView* routeViewB;	// @synthesize=_routeViewB
@property(retain, nonatomic) id<MKOverlay> routeViewBModel;	// @synthesize=_routeViewBModel
@property(assign, nonatomic) int searchMode;	// @synthesize=_searchMode
@property(readonly, assign, nonatomic) MKRoute* selectedRoute;
@property(readonly, assign, nonatomic) unsigned selectedRouteIndex;
@property(assign, nonatomic) BOOL showingRoute;
@property(readonly, assign, nonatomic) MKRouteStep* step;
@property(readonly, assign, nonatomic) unsigned stepIndex;
@property(retain, nonatomic) NSMutableSet* stepsToInvalidate;	// @synthesize=_stepsToInvalidate
@property(retain, nonatomic) NSMutableDictionary* transitAnnotationViews;	// @synthesize=_transitAnnotationViews
+(void)reorientIfOffscreenAlternateRouteAnnotationView:(id)view forMapView:(id)mapView;
+(id)sharedManager;
+(void)updateLocationAndOrientationOfAlternateRouteAnnotationViews:(id)alternateRouteAnnotationViews;
-(id)init;
-(id)_acceptableOrientationsForRouteAnnotationView:(id)routeAnnotationView fromOrientations:(id)orientations withStaticRouteAnnotationView:(id)staticRouteAnnotationView inOrientation:(id)orientation;
-(id)_acceptableOrientationsForRouteAnnotationView:(id)routeAnnotationView withAnnotationViewToAvoid:(id)avoid;
-(id)_acceptableOrientationsForRouteAnnotationView:(id)routeAnnotationView withAnnotationViewsToAvoid:(id)avoid;
-(void)_animateRouteForMapView:(id)mapView destination:(XXStruct_Yvvv9D)destination duration:(double)duration originalScrollViewZoomScale:(float)scale zoomScale:(float)scale5;
-(void)_animateRoutePositionViewPanMapView:(id)view;
-(BOOL)_animateRoutePositionViewPanMapView:(id)view centerPoint:(CADoublePoint)point scale:(float)scale duration:(double)duration animation:(int)animation;
-(float)_areaOverlapOfRouteAnnotationView:(id)routeAnnotationView withAnnotationViewToAvoid:(id)avoid inOrientation:(int)orientation;
-(void)_cancelAnimationsForMapView:(id)mapView;
-(void)_cleanup;
-(void)_cleanupAfterRVBAnimationForMapView:(id)mapView;
-(void)_didHideRouteMapView:(id)view;
-(void)_handleTapToSwitchRoutes:(id)switchRoutes;
-(void)_hideAnnotationView:(id)view;
-(void)_invalidateRouteStepsForMapView:(id)mapView;
-(void)_minimizeOverlapOfRouteAnnotationViewsInMapView:(id)mapView;
-(BOOL)_needsToPanRoutePositionView;
-(void)_resetRouteLoaderForMapView:(id)mapView;
-(CGPoint)_routePositionCenterForMapView:(id)mapView;
-(id)_routePositionViewImage;
-(void)_saveStepToInvalidate:(int)invalidate;
-(void)_setMapView:(id)view showingRoute:(BOOL)route animate:(BOOL)animate;
-(void)_setShowingAlternateRouteAnnotationViews:(BOOL)views forAnnotationContainerView:(id)annotationContainerView;
-(void)_setShowingTransitAnnotationViews:(BOOL)views forAnnotationContainerView:(id)annotationContainerView;
-(void)_setTransitAnnotationViewAlphas:(float)alphas;
-(void)_setupRoutePositionView;
-(void)_showAnnotationView:(id)view;
-(void)_synchronizeScrollingAnimation:(BOOL)animation;
-(void)_updateRoutePosition;
-(void)_updateRoutePositionViewForMapView:(id)mapView;
-(id)_viewForAnnotation:(id)annotation;
-(void)_willRemoveAnnotationView:(id)view;
-(XXStruct_3X26yA)_zoomRegionForStep:(id)step inRoute:(id)route inMapView:(id)mapView;
// declared property getter: -(id)alternateRouteAnnotationViews;
-(void)animateRoutePositionViewForMapView:(id)mapView;
-(void)deferred_animateRoutePositionViewPan:(id)pan;
// declared property getter: -(id)delegate;
// declared property getter: -(id)displayedRouteGroup;
-(void)gestureRecognizer:(id)recognizer tappedAnnotationView:(id)view;
-(void)goToRouteStepForMapView:(id)mapView animated:(BOOL)animated;
// declared property getter: -(BOOL)isDroppingRoutePins;
// declared property getter: -(BOOL)isShowingAlternateRouteAnnotationViews;
// declared property getter: -(BOOL)isShowingTransitAnnotationViews;
-(void)mapView:(id)view resetDisplay:(BOOL)display;
// declared property getter: -(BOOL)needToShowRoute;
// declared property getter: -(BOOL)pansAndZoomsToRouteOverview;
// declared property getter: -(id)previousStep;
// declared property getter: -(unsigned)previousStepIndex;
-(id)routeCorrectedLocationForLocation:(id)location routeStep:(id*)step;
// declared property getter: -(id)routeGroup;
// declared property getter: -(id)routeLoader;
// declared property getter: -(id)routePositionView;
// declared property getter: -(CADoublePoint)routePositionViewCoordinate;
// declared property getter: -(BOOL)routeStartStepIsActive;
// declared property getter: -(id)routeView;
// declared property getter: -(id)routeViewB;
// declared property getter: -(id)routeViewBModel;
// declared property getter: -(int)searchMode;
// declared property getter: -(id)selectedRoute;
// declared property getter: -(unsigned)selectedRouteIndex;
// declared property setter: -(void)setAlternateRouteAnnotationViews:(id)views;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setIsDroppingRoutePins:(BOOL)pins;
// declared property setter: -(void)setIsShowingAlternateRouteAnnotationViews:(BOOL)views;
// declared property setter: -(void)setIsShowingTransitAnnotationViews:(BOOL)views;
// declared property setter: -(void)setNeedToShowRoute:(BOOL)showRoute;
// declared property setter: -(void)setRouteLoader:(id)loader;
// declared property setter: -(void)setRoutePositionView:(id)view;
// declared property setter: -(void)setRoutePositionViewCoordinate:(CADoublePoint)coordinate;
// declared property setter: -(void)setRouteView:(id)view;
// declared property setter: -(void)setRouteViewB:(id)b;
// declared property setter: -(void)setRouteViewBModel:(id)model;
// declared property setter: -(void)setSearchMode:(int)mode;
-(void)setSelectedRouteIndex:(unsigned)index forMapView:(id)mapView;
// declared property setter: -(void)setShowingRoute:(BOOL)route;
// declared property setter: -(void)setStepsToInvalidate:(id)invalidate;
// declared property setter: -(void)setTransitAnnotationViews:(id)views;
// declared property getter: -(BOOL)showingRoute;
// declared property getter: -(id)step;
// declared property getter: -(unsigned)stepIndex;
// declared property getter: -(id)stepsToInvalidate;
-(id)titleForAllRoutes;
-(id)titleForRoute:(id)route;
// declared property getter: -(id)transitAnnotationViews;
-(void)updateAlternateRouteAnnotationViewsForMapView:(id)mapView;
@end
