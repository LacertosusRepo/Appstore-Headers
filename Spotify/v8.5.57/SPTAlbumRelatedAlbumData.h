//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTAlbumRelatedAlbumData : NSObject
{
    NSString *_albumName;
    NSURL *_albumURL;
    NSURL *_albumViewURL;
    NSString *_albumMetadata;
    NSURL *_albumImageURL;
}

@property(readonly, copy, nonatomic) NSURL *albumImageURL; // @synthesize albumImageURL=_albumImageURL;
@property(readonly, copy, nonatomic) NSString *albumMetadata; // @synthesize albumMetadata=_albumMetadata;
@property(readonly, copy, nonatomic) NSURL *albumViewURL; // @synthesize albumViewURL=_albumViewURL;
@property(readonly, copy, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithAlbumName:(id)arg1 albumURL:(id)arg2 albumViewURL:(id)arg3 albumImageURL:(id)arg4 albumMetadata:(id)arg5;

@end

