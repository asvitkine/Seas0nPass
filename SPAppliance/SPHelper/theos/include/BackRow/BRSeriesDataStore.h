/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRDataStore.h"

@class NSString, NSSet;

@interface BRSeriesDataStore : BRDataStore {
@private
	NSSet *_seriesMediaTypes;	// 40 = 0x28
	NSString *_seriesName;	// 44 = 0x2c
	int _seriesDataStoreType;	// 48 = 0x30
}
+ (id)byDateDataStoreWithTypes:(id)types;	// 0x31635ed9
+ (id)byMostRecentDataStoreWithTypes:(id)types;	// 0x31635df5
+ (id)byShowDataStoreWithTypes:(id)types forSeries:(id)series;	// 0x31635e8d
+ (id)byUnwatchedByMostRecentDataStoreWithTypes:(id)types;	// 0x31635da9
+ (id)byUnwatchedDataStoreWithTypes:(id)types forSeries:(id)series;	// 0x31635e41
- (id)_aggregateSeries:(id)series aggregate:(id)aggregate sortByDate:(BOOL)date;	// 0x3163561d
- (id)_filteredSeriesFrom:(id)from;	// 0x31635265
- (id)_groupEpisodesIntoSeries:(id)series filterOutWatched:(BOOL)watched sortByDate:(BOOL)date;	// 0x316350dd
- (id)_groupSeriesIntoSeasons:(id)seasons filterOutWatched:(BOOL)watched;	// 0x31634f6d
- (void)_handleObjectModifiedForMostRecentUnwatchedDataStore:(id)mostRecentUnwatchedDataStore;	// 0x31634d3d
- (id)_initWithSeriesTypes:(id)seriesTypes seriesName:(id)name dataStoreType:(int)type;	// 0x31635f21
- (id)_labelForSeason:(int)season;	// 0x31635465
- (id)_mediaTypePredicate;	// 0x31635509
- (id)_primaryCollectionTitlesFromData:(id)data;	// 0x31634e6d
- (id)_seriesPredicate;	// 0x316354b9
- (id)_sortResultsByDate:(id)date;	// 0x316353ad
- (void)addObject:(id)object;	// 0x31635c71
- (void)dealloc;	// 0x31635f9d
- (id)hashForData:(id)data;	// 0x316357b9
- (id)loadData;	// 0x316358a1
- (void)objectModified:(id)modified;	// 0x31635bd5
- (void)removeObject:(id)object;	// 0x31635bc1
- (BOOL)storeAppliesToObject:(id)object;	// 0x31635ce5
@end

