//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastYourLibraryShowCellConfigurator-Protocol.h"

@class GLUEEntityRowStyle, NSString, SPTTheme;
@protocol GLUEImageLoader, GLUETheme;

@interface SPTPodcastYourLibraryShowCellConfiguratorImplementation : NSObject <SPTPodcastYourLibraryShowCellConfigurator>
{
    id <GLUEImageLoader> _glueImageLoader;
    GLUEEntityRowStyle *_style;
    id <GLUETheme> _glueTheme;
    SPTTheme *_theme;
}

@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) GLUEEntityRowStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
- (void).cxx_destruct;
- (id)rowStyle;
- (void)setupLeadingAccessoryForCell:(id)arg1 withViewModel:(id)arg2;
- (void)setupContentViewForCell:(id)arg1;
- (id)configureShowCell:(id)arg1 atIndexPath:(id)arg2 showEntity:(id)arg3 target:(id)arg4;
@property(readonly, nonatomic) double preferredCellHeight;
- (id)initWithImageLoader:(id)arg1 glueTheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

