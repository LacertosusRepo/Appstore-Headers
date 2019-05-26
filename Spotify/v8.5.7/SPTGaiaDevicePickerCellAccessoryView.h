//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSIndexPath, SPTContextMenuAccessoryButton, SPTTheme;

@interface SPTGaiaDevicePickerCellAccessoryView : UIControl
{
    NSIndexPath *_indexPath;
    SPTContextMenuAccessoryButton *_contextMenuButton;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTContextMenuAccessoryButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupContextMenuButton;
- (id)initWithIndexPath:(id)arg1;

@end

