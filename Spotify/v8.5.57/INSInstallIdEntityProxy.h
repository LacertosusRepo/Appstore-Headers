//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSInstallIdEntityProtocol-Protocol.h"

@class NSString;

@interface INSInstallIdEntityProxy : NSObject <INSInstallIdEntityProtocol>
{
    NSString *_installId;
}

+ (id)proxyWithEntity:(id)arg1;
+ (id)proxyWithInstallId:(id)arg1;
@property(copy, nonatomic) NSString *installId; // @synthesize installId=_installId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIntallId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

