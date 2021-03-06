//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTSearchOfflineTrack : NSObject
{
    _Bool _isExplicit;
    _Bool _isPremiumOnly;
    _Bool _isMogef19;
    NSString *_name;
    NSURL *_uri;
    NSString *_albumName;
    NSString *_artistName;
}

@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly, nonatomic) _Bool isMogef19; // @synthesize isMogef19=_isMogef19;
@property(readonly, nonatomic) _Bool isPremiumOnly; // @synthesize isPremiumOnly=_isPremiumOnly;
@property(readonly, nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(readonly, copy, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 uri:(id)arg2 isExplicit:(_Bool)arg3 isPremiumOnly:(_Bool)arg4 isMogef19:(_Bool)arg5 albumName:(id)arg6 artistName:(id)arg7;

@end

