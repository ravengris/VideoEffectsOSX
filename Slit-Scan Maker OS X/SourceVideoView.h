//
//  SourceVideoView.h
//  Slit-Scan Maker OS X
//
//  Created by Valentine on 25.01.16.
//  Copyright © 2016 Songsterr. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SourceVideoView : NSView

@property (nonatomic, strong, readonly) RACSignal *draggedFilesSignal;
@property (nonatomic, assign) BOOL locked;

@property (nonatomic, assign) BOOL verticalSlit;
@property (nonatomic, assign) BOOL showSlit;
@property (nonatomic, assign) NSInteger slitPosition;

- (void)updatePreview:(NSImage *)preview;

@end
