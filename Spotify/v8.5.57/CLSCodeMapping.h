//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface CLSCodeMapping : NSObject
{
    int _source;
    NSURL *_URL;
    NSString *_sourceName;
}

+ (id)mappingWithURL:(id)arg1;
@property(readonly, copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) int source; // @synthesize source=_source;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

@end

