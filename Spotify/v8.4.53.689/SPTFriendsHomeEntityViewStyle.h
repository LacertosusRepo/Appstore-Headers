//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUECollectionViewStyle, NSString;

@interface SPTFriendsHomeEntityViewStyle : NSObject <GLUEStyle>
{
    GLUECollectionViewStyle *_collectionStyle;
}

+ (id)styleWithTheme:(id)arg1;
@property(copy, nonatomic) GLUECollectionViewStyle *collectionStyle; // @synthesize collectionStyle=_collectionStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

