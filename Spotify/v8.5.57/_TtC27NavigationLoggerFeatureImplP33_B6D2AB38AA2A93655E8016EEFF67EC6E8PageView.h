//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationPageViewProtocol-Protocol.h"

@class MISSING_TYPE, NSString, NSURL;

@interface _TtC27NavigationLoggerFeatureImplP33_B6D2AB38AA2A93655E8016EEFF67EC6E8PageView : NSObject <SPTInstrumentationPageViewProtocol>
{
    MISSING_TYPE *pageIdentifier;
    MISSING_TYPE *pageURI;
    MISSING_TYPE *pageName;
    MISSING_TYPE *navigationRootIdentifier;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *navigationRootIdentifier;
@property(nonatomic, copy) NSString *pageName;
@property(nonatomic, copy) NSURL *pageURI;
@property(nonatomic, copy) NSString *pageIdentifier;

@end
