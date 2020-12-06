#include "Animator.h"
Animator* Animator::instance = nullptr;
Animator::Animator() { // �������� � ���������� ���� �������� � ���������� � ������������
    // ���� �������� ������������
    // ���� �������� ������������ 
    // ���� �������� ������������
    // ���� �������� ������������
    Image anim_up_0; anim_up_0.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_North_frame_0.png");
    Image anim_up_1; anim_up_1.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_North_frame_1.png");
    Image anim_up_2; anim_up_2.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_North_frame_2.png");
    Image anim_up_3; anim_up_3.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_North_frame_3.png");
    std::vector<Image> animation_up{ // �������� �������� ������ �����
        anim_up_0, anim_up_1, anim_up_2, anim_up_3
    };
    Image anim_down_0; anim_down_0.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_South_frame_0.png");
    Image anim_down_1; anim_down_1.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_South_frame_1.png");
    Image anim_down_2; anim_down_2.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_South_frame_2.png");
    Image anim_down_3; anim_down_3.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_South_frame_3.png");
    std::vector<Image> animation_down{ // �������� �������� ������ ����
        anim_down_0, anim_down_1, anim_down_2, anim_down_3
    };

    Image anim_left_0; anim_left_0.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_West_frame_0.png");
    Image anim_left_1; anim_left_1.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_West_frame_1.png");
    Image anim_left_2; anim_left_2.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_West_frame_2.png");
    Image anim_left_3; anim_left_3.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_West_frame_3.png");
    std::vector<Image> animation_left{ // �������� �������� ������ ������
        anim_left_0, anim_left_1, anim_left_2, anim_left_3
    };
    Image anim_right_0; anim_right_0.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_East_frame_0.png");
    Image anim_right_1; anim_right_1.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_East_frame_1.png");
    Image anim_right_2; anim_right_2.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_East_frame_2.png");
    Image anim_right_3; anim_right_3.loadFromFile("NES Slave - Toby Orbon Free Files/Walk/Walk_East_frame_3.png");
    std::vector<Image> animation_right{ // �������� �������� ������ ������
        anim_right_0, anim_right_1, anim_right_2, anim_right_3
    };
    // ���� �������� ������������
    // ���� �������� ������������ 
    // ���� �������� ������������
    // ���� �������� ������������

    // ���� �������� ����
    // ���� �������� ����
    // ���� �������� ����
    // ���� �������� ����
    Image anim_up_run_0; anim_up_run_0.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_North_frame_0.png");
    Image anim_up_run_1; anim_up_run_1.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_North_frame_1.png");
    Image anim_up_run_2; anim_up_run_2.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_North_frame_2.png");
    Image anim_up_run_3; anim_up_run_3.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_North_frame_3.png");
    std::vector<Image> animation_run_up{ //  ������ �������� ���� �����
        anim_up_run_0, anim_up_run_1, anim_up_run_2, anim_up_run_3
    };
    Image anim_down_run_0; anim_down_run_0.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_South_frame_0.png");
    Image anim_down_run_1; anim_down_run_1.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_South_frame_1.png");
    Image anim_down_run_2; anim_down_run_2.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_South_frame_2.png");
    Image anim_down_run_3; anim_down_run_3.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_South_frame_3.png");
    std::vector<Image> animation_run_down{ // ������ �������� ���� ����
        anim_down_run_0, anim_down_run_1, anim_down_run_2, anim_down_run_3
    };
    Image anim_left_run_0; anim_left_run_0.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_West_frame_0.png");
    Image anim_left_run_1; anim_left_run_1.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_West_frame_1.png");
    Image anim_left_run_2; anim_left_run_2.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_West_frame_2.png");
    Image anim_left_run_3; anim_left_run_3.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_West_frame_3.png");
    std::vector<Image> animation_run_left{ // ������ �������� ���� �����
        anim_left_run_0, anim_left_run_1, anim_left_run_2, anim_left_run_3
    };
    Image anim_right_run_0; anim_right_run_0.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_East_frame_0.png");
    Image anim_right_run_1; anim_right_run_1.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_East_frame_1.png");
    Image anim_right_run_2; anim_right_run_2.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_East_frame_2.png");
    Image anim_right_run_3; anim_right_run_3.loadFromFile("NES Slave - Toby Orbon Free Files/Run/Run_East_frame_3.png");
    std::vector<Image> animation_run_right{ // ������ �������� ���� �����
        anim_right_run_0, anim_right_run_1, anim_right_run_2, anim_right_run_3
    };
    // ���� �������� ����
    // ���� �������� ����
    // ���� �������� ����
    // ���� �������� ����




    Animator::player_animations.push_back(animation_up);
    Animator::player_animations.push_back(animation_down);
    Animator::player_animations.push_back(animation_left); 
    Animator::player_animations.push_back(animation_right);
    //�������� ���� 
    Animator::player_animations.push_back(animation_run_up);
    Animator::player_animations.push_back(animation_run_down);
    Animator::player_animations.push_back(animation_run_left);
    Animator::player_animations.push_back(animation_run_right);

}
Animator* Animator::getInstance() {
    if (!Animator::instance) {
        Animator::instance = new Animator;
    }
    return Animator::instance;
}