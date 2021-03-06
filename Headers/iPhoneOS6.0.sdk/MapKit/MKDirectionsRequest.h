/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MKMapItem;

@interface MKDirectionsRequest : XXUnknownSuperclass {
@private
	MKMapItem* source;
	MKMapItem* destination;
}
@property(retain, nonatomic) MKMapItem* destination;	// @synthesize
@property(retain, nonatomic) MKMapItem* source;	// @synthesize
+(BOOL)isDirectionsRequestURL:(id)url;
-(id)initWithContentsOfURL:(id)url;
-(void)dealloc;
// declared property getter: -(id)destination;
-(id)dictionaryRepresentation;
// declared property setter: -(void)setDestination:(id)destination;
// declared property setter: -(void)setSource:(id)source;
// declared property getter: -(id)source;
-(BOOL)writeToURL:(id)url error:(id*)error;
@end

