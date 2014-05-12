//
//  CameraViewController.h
//  PickYourClothesCoreData
//
//  Created by tianxiang zhang on 4/5/14.
//  Copyright (c) 2014 tianxiang zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MobileCoreServices/MobileCoreServices.h>
#import "KindOfViewController.h"
#import "TQStarRatingView.h"

@interface CameraViewController : UIViewController <UIActionSheetDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate,StarRatingViewDelegate,UITextFieldDelegate,UITextViewDelegate>
@property BOOL newMedia;
@property NSString *entitycloth;

- (IBAction)save:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *clothrate;
@property (weak, nonatomic) IBOutlet UIView *ratestar;
@property (strong ,nonatomic) NSNumber *ratecons;
@property (weak, nonatomic) IBOutlet UITextView *describe;

@property (weak, nonatomic) IBOutlet UIView *imageView;
- (IBAction)takepicture:(id)sender;

@property (weak, nonatomic) IBOutlet UIImageView *image;
@property (weak, nonatomic) IBOutlet UITextField *name;
@property (weak, nonatomic) IBOutlet UITextField *brand;
@end
