/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SADistance, NSNumber;

@interface SALocation : SADomainObject  {
}

@property(copy) NSNumber * accuracy;
@property(copy) NSString * city;
@property(copy) NSString * countryCode;
@property(copy) NSArray * entryPoints;
@property(copy) NSString * label;
@property(copy) NSNumber * latitude;
@property(copy) NSNumber * longitude;
@property(copy) NSString * postalCode;
@property(copy) NSString * regionType;
@property(retain) SADistance * relativeDistance;
@property(copy) NSString * stateCode;
@property(copy) NSString * street;
@property(copy) NSString * subThoroughfare;
@property(copy) NSString * thoroughfare;
@property(copy) NSString * timezoneId;

+ (id)locationWithDictionary:(id)arg1 context:(id)arg2;
+ (id)location;

- (id)accuracy;
- (void)setStreet:(id)arg1;
- (void)setStateCode:(id)arg1;
- (id)stateCode;
- (void)setRelativeDistance:(id)arg1;
- (id)relativeDistance;
- (void)setRegionType:(id)arg1;
- (id)regionType;
- (void)setPostalCode:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setAccuracy:(id)arg1;
- (void)setTimezoneId:(id)arg1;
- (id)timezoneId;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)longitude;
- (id)latitude;
- (void)setCountryCode:(id)arg1;
- (id)countryCode;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (id)entryPoints;
- (void)setEntryPoints:(id)arg1;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)groupIdentifier;
- (void)setLongitude:(id)arg1;
- (void)setLatitude:(id)arg1;
- (id)postalCode;
- (id)street;
- (id)city;
- (id)afui_mapKitAddressDictionaryRepresentation;
- (id)afui_coreLocationRepresentation;

@end