/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

typedef struct _NSZone NSZone;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct dispatch_queue_s dispatch_queue_s;

@class AVPlayerItemAccessLog;
typedef struct MPMovieAccessLogInternal {
	AVPlayerItemAccessLog* accessLog;
} MPMovieAccessLogInternal;

@class AVPlayerItemErrorLog;
typedef struct MPMovieErrorLogInternal {
	AVPlayerItemErrorLog* errorLog;
} MPMovieErrorLogInternal;

@class AVPlayerItemAccessLogEvent;
typedef struct MPMovieAccessLogEventInternal {
	AVPlayerItemAccessLogEvent* event;
} MPMovieAccessLogEventInternal;

@class AVPlayerItemErrorLogEvent;
typedef struct MPMovieErrorLogEventInternal {
	AVPlayerItemErrorLogEvent* event;
} MPMovieErrorLogEventInternal;

typedef struct __CFBag* CFBagRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} XXStruct_pwHToB;

typedef struct __CFSet* CFSetRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

typedef struct __CFRunLoopTimer* CFRunLoopTimerRef;

typedef struct dispatch_source_s dispatch_source_s;

typedef struct CGImage* CGImageRef;

typedef struct CGAffineTransform {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
	float _field6;
} CGAffineTransform;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

@class NSArray, MPMediaLibrary, MPMediaQueryCriteria;
typedef struct MPMediaQueryInternal {
	MPMediaLibrary* _mediaLibrary;
	MPMediaQueryCriteria* _criteria;
	int _isFilteringDisabled;
	NSArray* _staticEntities;
	int _staticEntityType;
} MPMediaQueryInternal;

@class NSString;
typedef struct MPMediaPropertyPredicateInternal {
	NSString* _property;
	id _value;
	int _comparisonType;
} MPMediaPropertyPredicateInternal;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

@class UIImage;
typedef struct MPMediaItemArtworkInternal {
	UIImage* image;
} MPMediaItemArtworkInternal;

@class NSCache, NSHashTable, CADisplayLink;
@protocol MPMediaLibraryDataProviderPrivate;
typedef struct MPMediaLibraryInternal {
	id<MPMediaLibraryDataProviderPrivate> _libraryDataProvider;
	int _libraryChangeObservers;
	dispatch_queue_s* _entityCacheQueue;
	NSCache* _itemsForCriteriaCache;
	NSCache* _collectionsForCriteriaCache;
	NSHashTable* _connectionAssertions;
	BOOL _disconnectAfterReleasingAssertions;
	float _connectionProgress;
	CADisplayLink* _connectionProgressDisplayLink;
	double _connectionProgressStartTime;
	int _removalReason;
	unsigned _filteringDisabled : 1;
	unsigned _determinedHasMedia : 1;
	unsigned _hasMedia : 1;
	unsigned _determinedHasSongs : 1;
	unsigned _hasSongs : 1;
	unsigned _determinedHasGeniusMixes : 1;
	unsigned _hasGeniusMixes : 1;
	unsigned _determinedHasPlaylists : 1;
	unsigned _hasPlaylists : 1;
	unsigned _determinedHasComposers : 1;
	unsigned _hasComposers : 1;
	unsigned _determinedHasPodcasts : 1;
	unsigned _hasPodcasts : 1;
	unsigned _determinedHasAudiobooks : 1;
	unsigned _hasAudiobooks : 1;
	BOOL _hasVideos;
	BOOL _determinedHasVideos;
	BOOL _hasMusicVideos;
	BOOL _determinedHasMusicVideos;
	BOOL _hasAudibleAudioBooks;
	BOOL _determinedHasAudibleAudioBooks;
	BOOL _hasMovies;
	BOOL _determinedHasMovies;
	BOOL _hasCompilations;
	BOOL _determinedHasCompilations;
	BOOL _hasITunesU;
	BOOL _determinedHasITunesU;
	BOOL _hasMovieRentals;
	BOOL _determinedHasMovieRentals;
	BOOL _hasTVShows;
	BOOL _determinedHasTVShows;
	BOOL _hasVideoPodcasts;
	BOOL _determinedHasVideoPodcasts;
} MPMediaLibraryInternal;

typedef struct MPMediaLibraryInternal {
	id _field1;
	int _field2;
	dispatch_queue_s* _field3;
	id _field4;
	id _field5;
	id _field6;
	BOOL _field7;
	float _field8;
	id _field9;
	double _field10;
	int _field11;
	unsigned _field12 : 1;
	unsigned _field13 : 1;
	unsigned _field14 : 1;
	unsigned _field15 : 1;
	unsigned _field16 : 1;
	unsigned _field17 : 1;
	unsigned _field18 : 1;
	unsigned _field19 : 1;
	unsigned _field20 : 1;
	unsigned _field21 : 1;
	unsigned _field22 : 1;
	unsigned _field23 : 1;
	unsigned _field24 : 1;
	unsigned _field25 : 1;
	unsigned _field26 : 1;
	BOOL _field27;
	BOOL _field28;
	BOOL _field29;
	BOOL _field30;
	BOOL _field31;
	BOOL _field32;
	BOOL _field33;
	BOOL _field34;
	BOOL _field35;
	BOOL _field36;
	BOOL _field37;
	BOOL _field38;
	BOOL _field39;
	BOOL _field40;
	BOOL _field41;
	BOOL _field42;
	BOOL _field43;
	BOOL _field44;
} MPMediaLibraryInternal;

typedef struct {
	unsigned _field1[8];
} XXStruct_kUSYWB;

@class MPMediaItem;
typedef struct MPMediaItemCollectionInternal {
	NSArray* _items;
	unsigned _itemsCount;
	MPMediaItem* _representativeItem;
	int _containedMediaTypes;
} MPMediaItemCollectionInternal;

typedef struct __CFArray* CFArrayRef;

typedef struct CGContext* CGContextRef;

@class NSDictionary;
typedef struct MPNowPlayingInfoCenterInternal {
	NSDictionary* nowPlayingInfo;
} MPNowPlayingInfoCenterInternal;

typedef struct StackItem {
	void* _field1;
	StackItem* _field2;
} StackItem;

typedef struct __IOSurfaceAccelerator* IOSurfaceAcceleratorRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct MLArtworkFormatSpec {
	unsigned _field1;
	unsigned _field2;
	unsigned _field3;
	unsigned _field4;
	int _field5;
	int _field6;
} MLArtworkFormatSpec;

typedef struct MLArtworkInstanceInfo {
	MLArtworkFormatSpec _field1;
	CGRect _field2;
} MLArtworkInstanceInfo;


