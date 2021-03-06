//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTPlayerMediaManifest : NSObject
{
    _Bool _adaptive;
    NSURL *_URL;
    NSString *_fileID;
    NSString *_mimeType;
    unsigned long long _bitrate;
    NSString *_encryption;
}

+ (id)fromJSON:(id)arg1;
@property(nonatomic) _Bool adaptive; // @synthesize adaptive=_adaptive;
@property(retain, nonatomic) NSString *encryption; // @synthesize encryption=_encryption;
@property(nonatomic) unsigned long long bitrate; // @synthesize bitrate=_bitrate;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)toJSON;
- (_Bool)isValid;
- (id)initWithDictionary:(id)arg1;

@end

