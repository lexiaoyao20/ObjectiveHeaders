/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import "MediaPlayer-Structs.h"
#import "MPMediaQuery.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, MPMediaLibrary, MPMediaQuerySectionInfo, NSSet;

@interface MPMediaQuery : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	MPMediaQueryInternal _internal;
}
@property(assign, nonatomic) MPMediaQueryInternal _internal;	// @synthesize
@property(copy, nonatomic) NSSet* collectionPropertiesToFetch;
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo* collectionSectionInfo;
@property(readonly, assign, nonatomic) NSArray* collectionSections;
@property(readonly, assign, nonatomic) NSArray* collections;
@property(readonly, assign, nonatomic) BOOL excludesEntitiesWithBlankNames;
@property(retain, nonatomic) NSSet* filterPredicates;
@property(assign, nonatomic) int groupingType;
@property(copy, nonatomic) NSSet* itemPropertiesToFetch;
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo* itemSectionInfo;
@property(readonly, assign, nonatomic) NSArray* itemSections;
@property(readonly, assign, nonatomic) NSArray* items;
@property(retain, nonatomic) MPMediaLibrary* mediaLibrary;
@property(copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray* orderingProperties;
@property(assign, nonatomic) BOOL sortItems;
@property(readonly, assign, nonatomic) BOOL specifiesPlaylistItems;
@property(readonly, assign, nonatomic) BOOL willGroupEntities;
+(id)ITunesUAudioQuery;
+(id)albumsQuery;
+(id)artistsQuery;
+(id)audibleAudiobooksQuery;
+(id)audiobooksQuery;
+(id)compilationsQuery;
+(id)composersQuery;
+(id)geniusMixesQuery;
+(id)genresQuery;
+(void)initialize;
+(id)movieRentalsQuery;
+(id)moviesQuery;
+(id)musicVideosQuery;
+(id)playlistsQuery;
+(id)podcastsQuery;
+(void)setFilteringDisabled:(BOOL)disabled;
+(id)songsQuery;
+(id)tvShowsQuery;
+(id)videoPodcastsQuery;
+(id)videosQuery;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithCriteria:(id)criteria library:(id)library;
-(id)initWithEntities:(id)entities entityType:(int)type;
-(id)initWithFilterPredicates:(id)filterPredicates;
-(id)initWithFilterPredicatesInternal:(id)filterPredicatesInternal;
-(void)_enumerateCollectionsUsingBlock:(id)block;
-(void)_enumerateItemsUsingBlock:(id)block;
// declared property getter: -(MPMediaQueryInternal)_internal;
-(BOOL)_isFilteringDisabled;
-(id)_itemsImmediately:(BOOL)immediately;
// declared property getter: -(id)_orderingProperties;
-(id)_sanitizedQuery;
// declared property setter: -(void)_setOrderingProperties:(id)properties;
-(id)_valueForAggregateFunction:(id)aggregateFunction onProperty:(id)property entityType:(int)type;
-(void)addFilterPredicate:(id)predicate;
// declared property getter: -(id)collectionPropertiesToFetch;
// declared property getter: -(id)collectionSectionInfo;
// declared property getter: -(id)collectionSections;
// declared property getter: -(id)collections;
-(id)copyWithZone:(NSZone*)zone;
-(id)criteria;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(BOOL)excludesEntitiesWithBlankNames;
// declared property getter: -(id)filterPredicates;
-(unsigned)groupingThreshold;
// declared property getter: -(int)groupingType;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(id)itemPropertiesToFetch;
// declared property getter: -(id)itemSectionInfo;
// declared property getter: -(id)itemSections;
// declared property getter: -(id)items;
// declared property getter: -(id)mediaLibrary;
-(void)removeFilterPredicate:(id)predicate;
// declared property setter: -(void)setCollectionPropertiesToFetch:(id)fetch;
-(void)setCriteria:(id)criteria;
// declared property setter: -(void)setFilterPredicates:(id)predicates;
// declared property setter: -(void)setGroupingType:(int)type;
// declared property setter: -(void)setItemPropertiesToFetch:(id)fetch;
// declared property setter: -(void)setMediaLibrary:(id)library;
// declared property setter: -(void)setSortItems:(BOOL)items;
-(void)setStaticEntities:(id)entities entityType:(int)type;
// declared property setter: -(void)set_internal:(MPMediaQueryInternal)internal;
// declared property getter: -(BOOL)sortItems;
// declared property getter: -(BOOL)specifiesPlaylistItems;
-(id)valueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property;
-(id)valueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property;
// declared property getter: -(BOOL)willGroupEntities;
@end

@interface MPMediaQuery (MPMediaQueryAdditions)
+(id)activeGeniusPlaylist;
-(id)predicateForProperty:(id)property;
-(void)removePredicatesForProperty:(id)property;
-(void)setFilterPredicate:(id)predicate forProperty:(id)property;
-(void)setFilterPropertyPredicate:(id)predicate;
@end

