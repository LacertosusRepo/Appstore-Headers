//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "INSInstallIdEntityProtocol-Protocol.h"

@class NSString;

@interface INSInstallIdEntity : NSManagedObject <INSInstallIdEntityProtocol>
{
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *installId; // @dynamic installId;
@property(readonly) Class superclass;
@end
