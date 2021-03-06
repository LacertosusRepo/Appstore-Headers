//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PDLPersonWithIDOptions : NSObject
{
    _Bool _optimizedForSpeed;
    _Bool _filterOutDeviceContact;
    _Bool _requiresServerExtendedData;
    _Bool _requiresEmailCertificate;
    _Bool _requiresEncodedProfileID;
    unsigned long long _photoSize;
}

+ (id)personWithIDOptionsFromLookupOptions:(id)arg1;
@property(readonly, nonatomic) _Bool requiresEncodedProfileID; // @synthesize requiresEncodedProfileID=_requiresEncodedProfileID;
@property(readonly, nonatomic) _Bool requiresEmailCertificate; // @synthesize requiresEmailCertificate=_requiresEmailCertificate;
@property(readonly, nonatomic) _Bool requiresServerExtendedData; // @synthesize requiresServerExtendedData=_requiresServerExtendedData;
@property(readonly, nonatomic) _Bool filterOutDeviceContact; // @synthesize filterOutDeviceContact=_filterOutDeviceContact;
@property(readonly, nonatomic) _Bool optimizedForSpeed; // @synthesize optimizedForSpeed=_optimizedForSpeed;
@property(readonly, nonatomic) unsigned long long photoSize; // @synthesize photoSize=_photoSize;
- (id)initWithBuilder:(id)arg1;

@end

