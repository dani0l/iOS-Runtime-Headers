/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface MIPArtist : PBCodable <NSCopying> {
    struct { 
        unsigned int storeId : 1; 
    NSString *_artworkId;
    } _has;
    NSString *_name;
    NSString *_sortName;
    long long _storeId;
}

@property(retain) NSString * artworkId;
@property(readonly) BOOL hasArtworkId;
@property(readonly) BOOL hasName;
@property(readonly) BOOL hasSortName;
@property BOOL hasStoreId;
@property(retain) NSString * name;
@property(retain) NSString * sortName;
@property long long storeId;

- (void).cxx_destruct;
- (id)artworkId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasArtworkId;
- (BOOL)hasName;
- (BOOL)hasSortName;
- (BOOL)hasStoreId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setArtworkId:(id)arg1;
- (void)setHasStoreId:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setSortName:(id)arg1;
- (void)setStoreId:(long long)arg1;
- (id)sortName;
- (long long)storeId;
- (void)writeTo:(id)arg1;

@end
