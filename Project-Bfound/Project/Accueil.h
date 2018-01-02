#pragma once

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgcodecs/imgcodecs.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/objdetect/objdetect.hpp>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<queue>

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Runtime::InteropServices;
	using namespace std;
	using namespace cv;
	Mat src; //image source


	typedef struct t_color_node {
		cv::Mat       mean;       // The mean of this node
		cv::Mat       cov;
		uchar         classid;    // The class ID

		t_color_node  *left;
		t_color_node  *right;
	} t_color_node;






	/// <summary>
	/// Description résumée de Accueil
	/// </summary>
	public ref class Accueil : public System::Windows::Forms::Form
	{


	public:
		Accueil(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Accueil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;






	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Picture";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Accueil::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(136, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Camera";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Accueil::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Source of Image ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(12, 148);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(325, 218);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Accueil::pictureBox1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(248, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Please choose an existant picture or take one  with";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"the camera";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(356, 148);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Face detection";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Accueil::button3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(485, 148);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(354, 67);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(356, 192);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(120, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Skin Detection";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Accueil::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(482, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Dominant Colors";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(482, 238);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Foundation ";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(485, 263);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(354, 103);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(356, 238);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Foundation Detection";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Accueil::button5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(495, 275);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(84, 72);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(609, 275);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(87, 72);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(735, 275);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(80, 72);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 16;
			this->pictureBox6->TabStop = false;
			// 
			// Accueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(848, 378);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Accueil";
			this->Text = L"Accueil";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		//load image from computer and show it in the picture box
		OpenFileDialog^ fd = gcnew OpenFileDialog();
		fd->Filter = "Image(*.bmp; *.jpg)|*.bmp;*.jpg|All files (*.*)|*.*||";
		if (fd->ShowDialog() == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}

		//charger l'image dans le picture box
		Bitmap^ btmpsrc = gcnew Bitmap(fd->FileName);
		pictureBox1->Image = btmpsrc;
		pictureBox1->Refresh();

		//copy image dans dossier du projet afin de l'utiliser dans la detection
		src = imread(ConvertString2Char(fd->FileName));
		Mat image = Mat(src);
		cv::imwrite("image.jpg", image);


		//load image 
		//src = imread(ConvertString2Char(fd ->FileName));
		//imshow("image with opencv",src);
	}



	private: char* ConvertString2Char(System::String^ str) {
		char* str2 = (char*)(void*)Marshal::StringToHGlobalAnsi(str);
		return str2;
	}


	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

		//object for face detection
		CascadeClassifier face_cascade;
		face_cascade.load("C:/computer vision/opencv/build/etc/haarcascades/haarcascade_frontalface_alt2.xml");

		//camera object
		VideoCapture capture;
		capture.open(0);

		//images for the capture
		Mat captureFrame;
		Mat grayScaleFrame;

		while (capture.read(captureFrame))
		{
			if (captureFrame.empty())
			{
				printf(" --(!) No captured frame -- Break!");
				break;
			}


			//capture a new image frame  
			capture >> captureFrame;

			imshow("window", captureFrame);


			if (waitKey(10) == 27)  break; // stop capturing by pressing ESC


			Mat cropImage = Mat(captureFrame);
			cv::imwrite("image.jpg", cropImage);


			/*
			//convert capture to gray and equalise it
			cvtColor(captureFrame, grayScaleFrame, COLOR_BGR2GRAY);
			equalizeHist(grayScaleFrame, grayScaleFrame);

			//vector array to store face detecte
			std::vector<Rect> faces;

			//find faces and stor them in the vector
			face_cascade.detectMultiScale(grayScaleFrame, faces, 1.1, 2, 0 | CASCADE_SCALE_IMAGE, cv::Size(30, 30));


			Rect rectCrop;
			for (size_t i = 0; i < faces.size(); i++)
			{

				//cv::Point center(faces[i].x + faces[i].width / 2, faces[i].y + faces[i].height / 2);
				rectCrop = Rect(faces[i].x, faces[i].y, faces[i].width, faces[i].height);
				rectangle(captureFrame, rectCrop, Scalar(255, 0, 255), 3, 8, 0);
				}

			//-- Show what you got
			imshow("window", captureFrame);

			//crop and save ROI as new image (extraction du detection)
			Mat cropImage = Mat(captureFrame);
			cv::imwrite("cropimage.jpg", cropImage);

			if (waitKey(10) == 27)
			{
				break; // stop capturing by pressing ESC

			}
			//charger l'image dans le picture box
			Bitmap^ btmpsrc = gcnew Bitmap("cropimage.jpg");
			pictureBox1->Image = btmpsrc;
			pictureBox1->Refresh();
			*/

		}

		//charger l'image dans le picture box
		Bitmap^ btmpsrc = gcnew Bitmap("image.jpg");
		pictureBox1->Image = btmpsrc;
		pictureBox1->Refresh();
		capture.release();
	}


	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		CascadeClassifier face_cascade;
		face_cascade.load("C:/computer vision/opencv/build/etc/haarcascades/haarcascade_frontalface_alt2.xml");

		Mat img;
		img = imread("image.jpg");

		// Detect faces
		std::vector<Rect> faces;
		face_cascade.detectMultiScale(img, faces, 1.1, 2, 0 | CV_HAAR_SCALE_IMAGE, cv::Size(30, 30));

		Rect rectCrop;
		for (int i = 0; i < faces.size(); i++)
		{
			rectCrop = Rect(faces[i].x, faces[i].y, faces[i].width, faces[i].height);
			rectangle(img, rectCrop, Scalar(255, 255, 255), 3, 8, 0);
		}

		//crop and save ROI as new image (extraction du detection)
		Mat cropImage = Mat(img, rectCrop);
		cv::imwrite("cropimage.jpg", cropImage);

		//charger l'image dans le picture box
		Bitmap^ btmpsrc = gcnew Bitmap("cropimage.jpg");
		pictureBox1->Image = btmpsrc;
		pictureBox1->Refresh();




	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		/*if (argc<3) {
			printf("Usage: %s <image> <count>\n", argv[0]);
			return 0;
		}*/

		// Load the file
		char* filename = "cropimage.jpg"; //argv[1]
		Mat matImage;
		matImage = cv::imread(filename);
		cv::imshow("matimage", matImage);
		if (!matImage.data) {
			printf("Unable to open the file: %s\n", filename);
			return;
		}


		/*cv::Scalar sumOfAllGrayLevels = sum(matImage);
		printf("Unable to open the file", sumOfAllGrayLevels);
		Mat img_bgr = imread("detected.jpg");

		for (int r = 0; r < img_bgr.rows; ++r) {
			for (int c = 0; c < img_bgr.cols; ++c) {
				std::cout << "Pixel at position (x, y) : (" << c << ", " << r << ") =" <<
					img_bgr.at<Vec3b>(r, c) << std::endl;


			}
		}

		vector<Mat> hsv_planes;
		split(matImage, hsv_planes);
		Mat h = hsv_planes[0]; // H channel
		Mat s = hsv_planes[1]; // S channel
		Mat v = hsv_planes[2]; // V channel
		imshow("hue", h);
		imshow("s", s);
		imshow("v", v);
		// Get width, height, number of channels
		//int w = channels.size;

		int nPixels = h.total();
		//int count = sumOfAllGrayLevels.val[0];*/
		int count = 3;//atoi(); //argv[2] : count color
		if (count <= 0 || count > 255) {
			printf("The color count needs to be between 1-255. You picked: %d\n", count);
			return;
		}

		std::vector<cv::Vec3b> colors = find_dominant_colors(matImage, count);



		cv::waitKey(0);
		return;

	}



			 //dominant colour 

			 cv::Mat get_dominant_palette(std::vector<cv::Vec3b> colors) {
				 const int tile_size = 40;
				 cv::Mat ret = cv::Mat(tile_size, tile_size*colors.size(), CV_8UC3, cv::Scalar(0));

				 for (int i = 0; i < colors.size(); i++) {
					 cv::Rect rect(i*tile_size, 0, tile_size, tile_size);
					 cv::rectangle(ret, rect, cv::Scalar(colors[i][0], colors[i][1], colors[i][2]), CV_FILLED);
				 }

				 return ret;
			 }

			 std::vector<t_color_node*> get_leaves(t_color_node *root) {
				 std::vector<t_color_node*> ret;
				 std::queue<t_color_node*> queue;
				 queue.push(root);

				 while (queue.size() > 0) {
					 t_color_node *current = queue.front();
					 queue.pop();

					 if (current->left && current->right) {
						 queue.push(current->left);
						 queue.push(current->right);
						 continue;
					 }

					 ret.push_back(current);
				 }

				 return ret;
			 }

			 std::vector<cv::Vec3b> get_dominant_colors(t_color_node *root) {
				 std::vector<t_color_node*> leaves = get_leaves(root);
				 std::vector<cv::Vec3b> ret;

				 for (int i = 0; i < leaves.size(); i++) {
					 cv::Mat mean = leaves[i]->mean;
					 ret.push_back(cv::Vec3b(mean.at<double>(0)*255.0f,
						 mean.at<double>(1)*255.0f,
						 mean.at<double>(2)*255.0f));
				 }

				 return ret;
			 }

			 int get_next_classid(t_color_node *root) {
				 int maxid = 0;
				 std::queue<t_color_node*> queue;
				 queue.push(root);

				 while (queue.size() > 0) {
					 t_color_node* current = queue.front();
					 queue.pop();

					 if (current->classid > maxid)
						 maxid = current->classid;

					 if (current->left != NULL)
						 queue.push(current->left);

					 if (current->right)
						 queue.push(current->right);
				 }

				 return maxid + 1;
			 }

			 void get_class_mean_cov(cv::Mat img, cv::Mat classes, t_color_node *node) {
				 const int width = img.cols;
				 const int height = img.rows;
				 const uchar classid = node->classid;

				 cv::Mat mean = cv::Mat(3, 1, CV_64FC1, cv::Scalar(0));
				 cv::Mat cov = cv::Mat(3, 3, CV_64FC1, cv::Scalar(0));

				 // We start out with the average color
				 double pixcount = 0;
				 for (int y = 0; y < height; y++) {
					 cv::Vec3b* ptr = img.ptr<cv::Vec3b>(y);
					 uchar* ptrClass = classes.ptr<uchar>(y);
					 for (int x = 0; x < width; x++) {
						 if (ptrClass[x] != classid)
							 continue;

						 cv::Vec3b color = ptr[x];
						 cv::Mat scaled = cv::Mat(3, 1, CV_64FC1, cv::Scalar(0));
						 scaled.at<double>(0) = color[0] / 255.0f;
						 scaled.at<double>(1) = color[1] / 255.0f;
						 scaled.at<double>(2) = color[2] / 255.0f;

						 mean += scaled;
						 cov = cov + (scaled * scaled.t());

						 pixcount++;
					 }
				 }

				 cov = cov - (mean * mean.t()) / pixcount;
				 mean = mean / pixcount;

				 // The node mean and covariance
				 node->mean = mean.clone();
				 node->cov = cov.clone();

				 return;
			 }

			 void partition_class(cv::Mat img, cv::Mat classes, uchar nextid, t_color_node *node) {
				 const int width = img.cols;
				 const int height = img.rows;
				 const int classid = node->classid;

				 const uchar newidleft = nextid;
				 const uchar newidright = nextid + 1;

				 cv::Mat mean = node->mean;
				 cv::Mat cov = node->cov;
				 cv::Mat eigenvalues, eigenvectors;
				 cv::eigen(cov, eigenvalues, eigenvectors);

				 cv::Mat eig = eigenvectors.row(0);
				 cv::Mat comparison_value = eig * mean;

				 node->left = new t_color_node();
				 node->right = new t_color_node();

				 node->left->classid = newidleft;
				 node->right->classid = newidright;

				 // We start out with the average color
				 for (int y = 0; y < height; y++) {
					 cv::Vec3b* ptr = img.ptr<cv::Vec3b>(y);
					 uchar* ptrClass = classes.ptr<uchar>(y);
					 for (int x = 0; x < width; x++) {
						 if (ptrClass[x] != classid)
							 continue;

						 cv::Vec3b color = ptr[x];
						 cv::Mat scaled = cv::Mat(3, 1,
							 CV_64FC1,
							 cv::Scalar(0));

						 scaled.at<double>(0) = color[0] / 255.0f;
						 scaled.at<double>(1) = color[1] / 255.0f;
						 scaled.at<double>(2) = color[2] / 255.0f;

						 cv::Mat this_value = eig * scaled;

						 if (this_value.at<double>(0, 0) <= comparison_value.at<double>(0, 0)) {
							 ptrClass[x] = newidleft;
						 }
						 else {
							 ptrClass[x] = newidright;
						 }
					 }
				 }
				 return;
			 }

			 cv::Mat get_quantized_image(cv::Mat classes, t_color_node *root) {
				 std::vector<t_color_node*> leaves = get_leaves(root);

				 const int height = classes.rows;
				 const int width = classes.cols;
				 cv::Mat ret(height, width, CV_8UC3, cv::Scalar(0));

				 for (int y = 0; y < height; y++) {
					 uchar *ptrClass = classes.ptr<uchar>(y);
					 cv::Vec3b *ptr = ret.ptr<cv::Vec3b>(y);
					 for (int x = 0; x < width; x++) {
						 uchar pixel_class = ptrClass[x];
						 for (int i = 0; i < leaves.size(); i++) {
							 if (leaves[i]->classid == pixel_class) {
								 ptr[x] = cv::Vec3b(leaves[i]->mean.at<double>(0) * 255,
									 leaves[i]->mean.at<double>(1) * 255,
									 leaves[i]->mean.at<double>(2) * 255);
							 }
						 }
					 }
				 }

				 return ret;
			 }

			 cv::Mat get_viewable_image(cv::Mat classes) {
				 const int height = classes.rows;
				 const int width = classes.cols;

				 const int max_color_count = 12;
				 cv::Vec3b *palette = new cv::Vec3b[max_color_count];
				 palette[0] = cv::Vec3b(0, 0, 0);
				 palette[1] = cv::Vec3b(255, 0, 0);
				 palette[2] = cv::Vec3b(0, 255, 0);
				 palette[3] = cv::Vec3b(0, 0, 255);
				 palette[4] = cv::Vec3b(255, 255, 0);
				 palette[5] = cv::Vec3b(0, 255, 255);
				 palette[6] = cv::Vec3b(255, 0, 255);
				 palette[7] = cv::Vec3b(128, 128, 128);
				 palette[8] = cv::Vec3b(128, 255, 128);
				 palette[9] = cv::Vec3b(32, 32, 32);
				 palette[10] = cv::Vec3b(255, 128, 128);
				 palette[11] = cv::Vec3b(128, 128, 255);

				 cv::Mat ret = cv::Mat(height, width, CV_8UC3, cv::Scalar(0, 0, 0));
				 for (int y = 0; y < height; y++) {
					 cv::Vec3b *ptr = ret.ptr<cv::Vec3b>(y);
					 uchar *ptrClass = classes.ptr<uchar>(y);
					 for (int x = 0; x < width; x++) {
						 int color = ptrClass[x];
						 if (color >= max_color_count) {
							 printf("You should increase the number of predefined colors!\n");
							 continue;
						 }
						 ptr[x] = palette[color];
					 }
				 }

				 return ret;
			 }

			 t_color_node* get_max_eigenvalue_node(t_color_node *current) {
				 double max_eigen = -1;
				 cv::Mat eigenvalues, eigenvectors;


				 std::queue<t_color_node*> queue;
				 queue.push(current);

				 t_color_node *ret = current;
				 if (!current->left && !current->right)
					 return current;

				 while (queue.size() > 0) {
					 t_color_node *node = queue.front();
					 queue.pop();

					 if (node->left && node->right) {
						 queue.push(node->left);
						 queue.push(node->right);
						 continue;
					 }

					 cv::eigen(node->cov, eigenvalues, eigenvectors);
					 double val = eigenvalues.at<double>(0);
					 if (val > max_eigen) {
						 max_eigen = val;
						 ret = node;
					 }
				 }

				 return ret;
			 }

			 std::vector<cv::Vec3b> find_dominant_colors(cv::Mat img, int count) {
				 const int width = img.cols;
				 const int height = img.rows;

				 cv::Mat classes = cv::Mat(height, width, CV_8UC1, cv::Scalar(1));
				 t_color_node *root = new t_color_node();

				 root->classid = 1;
				 root->left = NULL;
				 root->right = NULL;

				 t_color_node *next = root;
				 get_class_mean_cov(img, classes, root);
				 for (int i = 0; i < count - 1; i++) {
					 next = get_max_eigenvalue_node(root);
					 partition_class(img, classes, get_next_classid(root), next);
					 get_class_mean_cov(img, classes, next->left);
					 get_class_mean_cov(img, classes, next->right);
				 }

				 std::vector<cv::Vec3b> colors = get_dominant_colors(root);

				 cv::Mat quantized = get_quantized_image(classes, root);
				 cv::Mat viewable = get_viewable_image(classes);
				 cv::Mat dom = get_dominant_palette(colors);

				 cv::imwrite("classification.png", viewable);
				 cv::imwrite("quantized.png", quantized);
				 cv::imwrite("palette.png", dom);

				 //charger l'image dans le picture box
				 Bitmap^ btmpsrc = gcnew Bitmap("palette.png");
				 pictureBox2->Image = btmpsrc;
				 pictureBox2->Refresh();

				 return colors;
			 }


			 bool compare(Mat img1, Mat img2) {


				 return false;
			 }

			 bool MyCompare(Mat img1, Mat img2)
			 {
				 Mat result;

				 int threshold = (double)(img1.rows * img1.cols) * 0.7;

				 cv::compare(img1, img2, result, cv::CMP_EQ);
				 int similarPixels = countNonZero(result);

				 if (similarPixels > threshold) {
					 return true;
				 }
				 return false;
			 }


	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

		/*
				Mat img1;
				img1 = imread("palette.png");


				//déclartion des arguments to calculate the histograms
				int h_bins = 50; int s_bins = 60;
				int histSize[] = { h_bins, s_bins };

				float h_ranges[] = { 0, 180 };
				float s_ranges[] = { 0, 256 };

				const float* ranges[] = { h_ranges, s_ranges };

				int channels[] = { 0, 1 };

				//Create the MatND objects to store the histograms:
				MatND hist_img1;
				MatND hist_img2;

				//convertir en HSV
				Mat hsv_img1, hsv_img2;
				cvtColor(img1, hsv_img1, CV_BGR2HSV);

				//Calculate the Histograms
				calcHist(&hsv_img1, 1, channels, Mat(), hist_img1, 2, histSize, ranges, true, false);
				normalize(hist_img1, hist_img1, 0, 1, NORM_MINMAX, -1, Mat());




				//path of foundation images
				cv::String path("foundation/*.jpg"); //select only jpg
				vector<cv::String> fn;
				vector<cv::Mat> data;
				cv::glob(path, fn, true); // recurse


				for (size_t k = 0; k < fn.size(); ++k)
				{
					cv::Mat img2 = cv::imread(fn[k]);

					if (img2.empty()) continue; //only proceed if sucsessful
					// you probably want to do some preprocessing*/
					/*
						cvtColor(img2, hsv_img2, CV_BGR2HSV);
						calcHist(&hsv_img2, 1, channels, Mat(), hist_img2, 2, histSize, ranges, true, false);
						normalize(hist_img2, hist_img2, 0, 1, NORM_MINMAX, -1, Mat());

						//apply the comparaison between the histogram of the base image (hist_img1) and the other histogram:
						for (int i = 0; i < 4; i++)
						{
							int compare_method = i;
							double base_img1 = compareHist(hist_img1, hist_img1, compare_method);
							double base_img2 = compareHist(hist_img1, hist_img2, compare_method);
							printf(" Method [%d] Perfect, BASe,Base-Imge2 : %f %f \n", i, base_img1, base_img2);

							if (compare_method == 0 && base_img2 < 0)
							{
								printf("\n no");
							}
							else  if (compare_method == 0 && base_img2 > 0) {


								printf("\n yes");

								PictureBox^ pb = gcnew PictureBox;
								pb->Parent = this; // 'this' is pointing to our form (the parent)



								Bitmap^ btmp = gcnew Bitmap();
								pb->Image = btmp;
								pb->Refresh();
							}





							//printf("image [%f] name : %f \n", k, fn[k]);
							//imshow("image", img2);
							data.push_back(img2);

						}*/











						//charger l'image dans le picture box
		Bitmap^ btmpsrc = gcnew Bitmap("1.jpg");
		pictureBox4->Image = btmpsrc;
		pictureBox4->Refresh();


		//charger l'image dans le picture box
		Bitmap^ btmpsrc1 = gcnew Bitmap("2.jpg");
		pictureBox5->Image = btmpsrc1;
		pictureBox5->Refresh();

		//charger l'image dans le picture box
		Bitmap^ btmpsrc2 = gcnew Bitmap("3.jpg");
		pictureBox6->Image = btmpsrc2;
		pictureBox6->Refresh();


		//déclaration et lecture des images
		Mat img1, img2;
		img1 = imread("palette.png");
		img2 = imread("skin.jpg");


	}
	
};
}
